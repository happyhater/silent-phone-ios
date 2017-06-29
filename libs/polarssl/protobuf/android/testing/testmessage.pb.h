// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: testmessage.proto

#ifndef PROTOBUF_testmessage_2eproto__INCLUDED
#define PROTOBUF_testmessage_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
// @@protoc_insertion_point(includes)

namespace test {
namespace protobuf {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_testmessage_2eproto();
void protobuf_AssignDesc_testmessage_2eproto();
void protobuf_ShutdownFile_testmessage_2eproto();

class Textmessage;

// ===================================================================

class Textmessage : public ::google::protobuf::MessageLite {
 public:
  Textmessage();
  virtual ~Textmessage();

  Textmessage(const Textmessage& from);

  inline Textmessage& operator=(const Textmessage& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::std::string* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const Textmessage& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const Textmessage* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(Textmessage* other);

  // implements Message ----------------------------------------------

  Textmessage* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const Textmessage& from);
  void MergeFrom(const Textmessage& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  void DiscardUnknownFields();
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional sint64 longInt64 = 1;
  inline bool has_longint64() const;
  inline void clear_longint64();
  static const int kLongInt64FieldNumber = 1;
  inline ::google::protobuf::int64 longint64() const;
  inline void set_longint64(::google::protobuf::int64 value);

  // optional sint32 standardInt32 = 2;
  inline bool has_standardint32() const;
  inline void clear_standardint32();
  static const int kStandardInt32FieldNumber = 2;
  inline ::google::protobuf::int32 standardint32() const;
  inline void set_standardint32(::google::protobuf::int32 value);

  // optional string someText = 3;
  inline bool has_sometext() const;
  inline void clear_sometext();
  static const int kSomeTextFieldNumber = 3;
  inline const ::std::string& sometext() const;
  inline void set_sometext(const ::std::string& value);
  inline void set_sometext(const char* value);
  inline void set_sometext(const char* value, size_t size);
  inline ::std::string* mutable_sometext();
  inline ::std::string* release_sometext();
  inline void set_allocated_sometext(::std::string* sometext);

  // @@protoc_insertion_point(class_scope:test.protobuf.Textmessage)
 private:
  inline void set_has_longint64();
  inline void clear_has_longint64();
  inline void set_has_standardint32();
  inline void clear_has_standardint32();
  inline void set_has_sometext();
  inline void clear_has_sometext();

  ::std::string _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int64 longint64_;
  ::std::string* sometext_;
  ::google::protobuf::int32 standardint32_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_testmessage_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_testmessage_2eproto();
  #endif
  friend void protobuf_AssignDesc_testmessage_2eproto();
  friend void protobuf_ShutdownFile_testmessage_2eproto();

  void InitAsDefaultInstance();
  static Textmessage* default_instance_;
};
// ===================================================================


// ===================================================================

// Textmessage

// optional sint64 longInt64 = 1;
inline bool Textmessage::has_longint64() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Textmessage::set_has_longint64() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Textmessage::clear_has_longint64() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Textmessage::clear_longint64() {
  longint64_ = GOOGLE_LONGLONG(0);
  clear_has_longint64();
}
inline ::google::protobuf::int64 Textmessage::longint64() const {
  // @@protoc_insertion_point(field_get:test.protobuf.Textmessage.longInt64)
  return longint64_;
}
inline void Textmessage::set_longint64(::google::protobuf::int64 value) {
  set_has_longint64();
  longint64_ = value;
  // @@protoc_insertion_point(field_set:test.protobuf.Textmessage.longInt64)
}

// optional sint32 standardInt32 = 2;
inline bool Textmessage::has_standardint32() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Textmessage::set_has_standardint32() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Textmessage::clear_has_standardint32() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Textmessage::clear_standardint32() {
  standardint32_ = 0;
  clear_has_standardint32();
}
inline ::google::protobuf::int32 Textmessage::standardint32() const {
  // @@protoc_insertion_point(field_get:test.protobuf.Textmessage.standardInt32)
  return standardint32_;
}
inline void Textmessage::set_standardint32(::google::protobuf::int32 value) {
  set_has_standardint32();
  standardint32_ = value;
  // @@protoc_insertion_point(field_set:test.protobuf.Textmessage.standardInt32)
}

// optional string someText = 3;
inline bool Textmessage::has_sometext() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Textmessage::set_has_sometext() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Textmessage::clear_has_sometext() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Textmessage::clear_sometext() {
  if (sometext_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    sometext_->clear();
  }
  clear_has_sometext();
}
inline const ::std::string& Textmessage::sometext() const {
  // @@protoc_insertion_point(field_get:test.protobuf.Textmessage.someText)
  return *sometext_;
}
inline void Textmessage::set_sometext(const ::std::string& value) {
  set_has_sometext();
  if (sometext_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    sometext_ = new ::std::string;
  }
  sometext_->assign(value);
  // @@protoc_insertion_point(field_set:test.protobuf.Textmessage.someText)
}
inline void Textmessage::set_sometext(const char* value) {
  set_has_sometext();
  if (sometext_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    sometext_ = new ::std::string;
  }
  sometext_->assign(value);
  // @@protoc_insertion_point(field_set_char:test.protobuf.Textmessage.someText)
}
inline void Textmessage::set_sometext(const char* value, size_t size) {
  set_has_sometext();
  if (sometext_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    sometext_ = new ::std::string;
  }
  sometext_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:test.protobuf.Textmessage.someText)
}
inline ::std::string* Textmessage::mutable_sometext() {
  set_has_sometext();
  if (sometext_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    sometext_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:test.protobuf.Textmessage.someText)
  return sometext_;
}
inline ::std::string* Textmessage::release_sometext() {
  clear_has_sometext();
  if (sometext_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = sometext_;
    sometext_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Textmessage::set_allocated_sometext(::std::string* sometext) {
  if (sometext_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete sometext_;
  }
  if (sometext) {
    set_has_sometext();
    sometext_ = sometext;
  } else {
    clear_has_sometext();
    sometext_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:test.protobuf.Textmessage.someText)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf
}  // namespace test

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_testmessage_2eproto__INCLUDED
