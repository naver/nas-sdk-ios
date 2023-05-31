//
//  GFPLogReqInfo.h
//
//  NAS(NAVER Ads Services) SDK for iOS
//
//  Copyright 2023-present NAVER Corp.
//  All rights reserved.
//
//  Unauthorized use, modification and redistribution of this software are strongly prohibited.

#import <Foundation/Foundation.h>

#import <NaverAdsServices/GFPLogWrapper.h>

NS_ASSUME_NONNULL_BEGIN

@protocol GFPLogReqInfoDelegate <NSObject>
- (nullable NSMutableDictionary *)initializeDict;
- (nullable NSMutableDictionary *)sdkInfoDict;
- (NSString *)projectNameKey;
@end

@interface GFPLogReqInfo : NSObject

@property (nonatomic, readonly, strong, nullable) NSData *data;
@property (nonatomic, class, weak) id<GFPLogReqInfoDelegate> delegate;

- (instancetype)initWith:(NSString *)aDomain message:(NSString *)aDomain extraInfo:(NSDictionary * _Nullable)aExtra;
- (instancetype)initWith:(GFPLogLevel)level domain:(NSString *)aDomain message:(NSString *)aDomain extraInfo:(NSDictionary * _Nullable)aExtra;

@end



NS_ASSUME_NONNULL_END
