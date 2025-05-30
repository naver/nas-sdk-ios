//
//  GFPSKAdNetworkUtils.h
//
//  NAM(Naver Ad Manager) SDK for iOS
//  Copyright 2022-present NAVER Corp.
//  Unauthorized use, modification and redistribution of this software are strongly prohibited.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


@interface GFPSKAdNetworkUtils : NSObject

@property (class, nonatomic, readonly, assign) BOOL isValid;

@property (class, nonatomic, readonly, strong) NSString *versions;
@property (class, nonatomic, readonly, strong) NSArray <NSString *> *skAdNetworkList;

//for skadn register
@property (class, nonatomic, readonly, strong) NSDictionary <NSString *, NSString *> *requestDict;

@end

NS_ASSUME_NONNULL_END
