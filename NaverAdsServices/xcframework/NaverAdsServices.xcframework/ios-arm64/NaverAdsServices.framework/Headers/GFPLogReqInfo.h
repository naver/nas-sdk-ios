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

#ifndef GFPLogReqInfo_h
#define GFPLogReqInfo_h

NS_ASSUME_NONNULL_BEGIN

@protocol GFPLogReqInfoDelegate <NSObject>
- (nullable NSMutableDictionary *)initializeDict;
- (nullable NSMutableDictionary *)sdkInfoDict;
- (NSString *)projectNameKey;
@end

@interface GFPLogReqInfo : NSObject

@property (nonatomic, readonly, strong, nullable) NSData *data;
@property (nonatomic, readwrite, strong, nullable) NSMutableDictionary *extraParams;
@property (nonatomic, class, weak) id<GFPLogReqInfoDelegate> delegate;

- (instancetype)initWith:(NSString *)domain message:(NSString *)message extraInfo:(NSDictionary * _Nullable)extraInfo;
- (instancetype)initWith:(NSString *)domain message:(NSString *)message extraInfo:(NSDictionary * _Nullable)extraInfo extraParams:(NSDictionary *_Nullable)extraParams;
- (instancetype)initWith:(GFPLogLevel)level domain:(NSString *)domain message:(NSString *)message extraInfo:(NSDictionary * _Nullable)extraInfo;
- (instancetype)initWith:(GFPLogLevel)level domain:(NSString *)domain message:(NSString *)message extraInfo:(NSDictionary * _Nullable)extraInfo extraParams:(NSDictionary *_Nullable)extraParams;

@end

NS_ASSUME_NONNULL_END

#endif
