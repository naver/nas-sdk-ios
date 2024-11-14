//
//  GFPLogWrapper.h
//
//  NAS(NAVER Ads Services) SDK for iOS
//
//  Copyright 2023-present NAVER Corp.
//  All rights reserved.
//
//  Unauthorized use, modification and redistribution of this software are strongly prohibited.

#import <Foundation/Foundation.h>
#import <NaverAdsServices/NASEnum-Swift.h>

NS_ASSUME_NONNULL_BEGIN

#define GFPLogTrace(fmt,...) \
[GFPLogWrapper logLevel:GFPLogLevelTrace method:__PRETTY_FUNCTION__ format:fmt, ##__VA_ARGS__];

#define GFPLogDebug(fmt,...) \
[GFPLogWrapper logLevel:GFPLogLevelDebug method:__PRETTY_FUNCTION__ format:fmt, ##__VA_ARGS__];

#define GFPLogError(fmt,...) \
[GFPLogWrapper logLevel:GFPLogLevelError method:__PRETTY_FUNCTION__ format:fmt, ##__VA_ARGS__];

#define GFPLogCritical(fmt,...) \
[GFPLogWrapper logLevel:GFPLogLevelCritical method:__PRETTY_FUNCTION__ format:fmt, ##__VA_ARGS__];


#define GFPSendLog(fmt,...) \
[GFPLogWrapper logLevel:GFPLogLevelInfo method:__PRETTY_FUNCTION__ format:fmt, ##__VA_ARGS__];

@class GFPLogReqInfo;

@protocol GFPLogOptionDelegate<NSObject>
- (BOOL)crashReportEnable;
- (BOOL)debugModeEnable;
- (BOOL)isSendInfoLog;
@optional
- (void)sendAdditionalInfo:(GFPLogReqInfo *)additionalInfo;
@end

@interface GFPLogWrapper : NSObject

@property (class, nonatomic, weak) id<GFPLogOptionDelegate> delegate;

+ (void)logLevel:(GFPLogLevel)level method:(const char *)method format:(NSString *)format, ...;

@end

NS_ASSUME_NONNULL_END
