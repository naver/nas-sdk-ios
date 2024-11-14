//
//  NASEnum-Swift.h
//
//  NAS(NAVER Ads Services) SDK for iOS
//
//  Copyright 2023-present NAVER Corp.
//  All rights reserved.
//
//  Unauthorized use, modification and redistribution of this software are strongly prohibited.

#ifndef NASEnum_Swift_h
#define NASEnum_Swift_h

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, GFPLogLevel) {
    GFPLogLevelTrace = 0,
    GFPLogLevelDebug,
    GFPLogLevelInfo,
    GFPLogLevelError,
    GFPLogLevelCritical,
    GFPLogLevelNone
};

typedef NS_OPTIONS(NSInteger, GFPAlignment) {
    GFPAlignmentLeft = 1,
    GFPAlignmentTop = 2,
    GFPAlignmentRight = 3,
    GFPAlignmentBottom = 4,
};


#endif /* NASEnum_Swift_h */
