/*
Copyright (C) 2014-2017, Silent Circle, LLC.  All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
    * Any redistribution, use, or modification is done solely for personal
      benefit and not for any commercial purpose or for monetary gain
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.
    * Neither the name Silent Circle nor the
      names of its contributors may be used to endorse or promote products
      derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL SILENT CIRCLE, LLC BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
//
//  EmbeddedIAPProduct.h
//  SilentText
//
//  Created by Ethan Arutunian on 5/27/14
//  Copyright (c) 2014 Silent Circle, LLC. All rights reserved.
//

#import "StoreKit/StoreKit.h"
#import "ProductVO.h"
#import "SPUser.h"

@interface EmbeddedProductResponse : NSObject
{
	NSArray *products;
}
@property (nonatomic,retain) NSArray *products;
+ (id)responseWithDefaultProductList;
@end

@interface EmbeddedIAPProduct : SKProduct
{
	// override SKProduct properties
	NSString *localizedTitle;
	NSString *localizedDescription;
	NSDecimalNumber *price;
	NSLocale *priceLocale;
	NSString *productIdentifier;
	NSNumber *tag;
}

+ (EmbeddedIAPProduct *)productWithID:(NSString *)productID tag:(NSNumber *)tag title:(NSString *)title description:(NSString *)description price:(NSDecimalNumber *)price;
+ (NSString *)productIDForPermission:(UserPermission)permission;

- (ProductVO *)toProductVO;

// override SKProduct properties
@property (nonatomic,retain) NSString *localizedTitle;
@property (nonatomic,retain) NSString *localizedDescription;
@property (nonatomic,retain) NSDecimalNumber *price;
@property (nonatomic,retain) NSLocale *priceLocale;
@property (nonatomic,retain) NSString *productIdentifier;
@property (nonatomic,retain) NSNumber *tag;

@end
