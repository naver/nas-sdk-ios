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
    GFPAlignmentLeft               = (1 << 0), // 0001
    GFPAlignmentRight              = (1 << 1), // 0010
    GFPAlignmentTop                = (1 << 2), // 0100
    GFPAlignmentBottom             = (1 << 3), // 1000
    GFPAlignmentHorizontalCenter   = (1 << 4), // 0001 0000
    GFPAlignmentVerticalCenter     = (1 << 5), // 0010 0000
};


#endif /* NASEnum_Swift_h */
