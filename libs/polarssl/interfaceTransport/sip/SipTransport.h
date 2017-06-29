#ifndef SIPTRANSPORT_H
#define SIPTRANSPORT_H

/**
 * @file SipTransport.h
 * @brief Implementation for network transport functions, SIP transport
 * @ingroup Axolotl++
 * @{
 */

#include <utility>
#include <vector>
#include <string>

#include "../Transport.h"
#include "../../interfaceApp/AppInterface.h"

static const char* scSipDomain = "@sip.silentcircle.net";

using namespace std;

namespace axolotl {

class SipTransport: public Transport
{
public:
    explicit SipTransport(AppInterface* appInterface) : appInterface_(appInterface), sendAxoData_(NULL) {}

    ~SipTransport() {}

    void setSendDataFunction(SEND_DATA_FUNC sendData) { sendAxoData_ = sendData; }

    SEND_DATA_FUNC getTransport() { return sendAxoData_; }

    vector<int64_t>* sendAxoMessage(const string& recipient, vector< pair< string, string > >* msgPairs);

    int32_t receiveAxoMessage(uint8_t* data, size_t length);

    int32_t receiveAxoMessage(uint8_t* data, size_t length, uint8_t* uid,  size_t uidLen,
                              uint8_t* primaryAlias, size_t aliasLen);

    void stateReportAxo(int64_t messageIdentifier, int32_t stateCode, uint8_t* data, size_t length);

    void notifyAxo(uint8_t* data, size_t length);

private:

    SipTransport(const SipTransport& other) = delete;
    SipTransport& operator= ( const SipTransport& other ) = delete;
    bool operator== ( const SipTransport& other ) const = delete;

    AppInterface *appInterface_;
    SEND_DATA_FUNC sendAxoData_;
};
}
/**
 * @}
 */

#endif // SIPTRANSPORT_H
