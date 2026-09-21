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

#ifndef GFPLogWrapper_h
#define GFPLogWrapper_h

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

/// Sends an error-severity log to Nelo (in addition to the console). Use for genuine
/// failures so they surface under NELO's ERROR bucket instead of INFO.
///
/// 전송 의사를 레벨에서 추론하지 않고 인자로 전달한다 — GFPLogError 와 레벨이
/// 같으므로, 레벨로 판단하면 콘솔 전용인 GFPLogError 호출부 전체가 전송 대상이
/// 되어버린다. 전송 여부는 GFPSendLog 와 동일하게 isSendInfoLog 로 차단된다.
#define GFPSendErrorLog(fmt,...) \
[GFPLogWrapper logLevel:GFPLogLevelError sendToNelo:YES method:__PRETTY_FUNCTION__ format:fmt, ##__VA_ARGS__];

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

/// `sendToNelo` 가 YES 면 레벨과 무관하게 Nelo 전송을 요청한다(isSendInfoLog 로
/// 차단 가능). NO 면 기존 레벨 기반 판단만 적용된다.
+ (void)logLevel:(GFPLogLevel)level sendToNelo:(BOOL)sendToNelo method:(const char *)method format:(NSString *)format, ...;

@end

NS_ASSUME_NONNULL_END

#endif
