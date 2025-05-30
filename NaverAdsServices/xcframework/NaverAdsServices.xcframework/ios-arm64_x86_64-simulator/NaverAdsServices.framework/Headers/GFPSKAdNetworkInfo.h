//
//  GFPSKAdNetworkInfo.h
//
//  NAM(Naver Ad Manager) SDK for iOS
//  Copyright 2022-present NAVER Corp.
//  Unauthorized use, modification and redistribution of this software are strongly prohibited.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class SKAdImpression;
@class GFPSKAdNetworkFidelity;

extern NSString *const kSKAdNetworkItunesitemKey;
extern NSString *const kSKAdNetworkNetworkKey;
extern NSString *const kSKAdNetworkVersionKey;
extern NSString *const kSKAdNetworkSourceAppKey;
extern NSString *const kSKAdNetworkProductPageIdKey;

extern NSString *const kSKAdNetworkCampaignKey;
extern NSString *const kSKAdNetworkSourceIdentifierKey;

extern NSString *const kSKAdNetworkFidelitiesKey;
extern NSString *const kSKAdNetworkFidelityKey;

extern NSString *const kSKAdNetworkNonceKey;
extern NSString *const kSKAdNetworkTimestampKey;
extern NSString *const kSKAdNetworkSignatureKey;

@interface GFPSKAdNetworkInfo : NSObject

@property (nonatomic, readonly, strong) NSString *version;
@property (nonatomic, readonly, strong) NSString *network;
@property (nonatomic, readonly, strong) NSNumber *itunesitem;
@property (nonatomic, readonly, strong) NSNumber *sourceapp;

@property (nonatomic, readonly, strong, nullable) NSString *productPageId;

@property (nonatomic, readonly, strong) NSNumber *campaign;
@property (nonatomic, readonly, strong) NSNumber *sourceIdentifier; //for 4.0

@property (nonatomic, readonly, strong) NSArray <GFPSKAdNetworkFidelity *> *fidelities;

@property (nonatomic, strong, readonly) NSDictionary <NSString *, __kindof NSObject *> *storeProductDict;

- (instancetype)init NS_UNAVAILABLE;
- (instancetype _Nullable)initWithDictionary:(NSDictionary *)aDict NS_DESIGNATED_INITIALIZER;

- (void)startImpression;
- (void)endImpression;

@end


@interface GFPSKAdNetworkFidelity : NSObject

/**
 * 0: for loadProduct
 * 1: VTA
 */
@property (nonatomic, readonly, strong) NSNumber *fidelity;

@property (nonatomic, readonly, strong) NSString *signature;
@property (nonatomic, readonly, strong) NSString *timestamp;

@property (nonatomic, readonly, strong) NSUUID *nonce;

@property (nonatomic, readonly, assign) BOOL isValid;

- (instancetype)init NS_UNAVAILABLE;
- (instancetype _Nullable)initWithDictionary:(NSDictionary *)aDict NS_DESIGNATED_INITIALIZER;

- (instancetype _Nullable)initWithType:(NSNumber *)type
                             signature:(NSString *)signature
                             timestamp:(NSString *)timestamp
                                 nonce:(NSString *)nonce NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
