#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.7.2 (swiftlang-5.7.2.135.5 clang-1400.0.29.51)
#ifndef NAVERADSSERVICES_SWIFT_H
#define NAVERADSSERVICES_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wduplicate-method-match"
#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT noexcept
#endif
#else
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT 
#endif
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_CXX_INT_DEFINED)
#define SWIFT_CXX_INT_DEFINED
namespace swift {
using Int = ptrdiff_t;
using UInt = size_t;
}
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreFoundation;
@import Foundation;
@import ObjectiveC;
@import StoreKit;
@import UIKit;
#endif

#import <NaverAdsServices/NaverAdsServices.h>

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="NaverAdsServices",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)
typedef SWIFT_ENUM(NSInteger, GFPAlignmentCenter, open) {
  GFPAlignmentCenterVertical = 0,
  GFPAlignmentCenterHorizontal = 1,
};

typedef SWIFT_ENUM(NSInteger, GFPCellularType, open) {
  GFPCellularTypeUnknown = 0,
  GFPCellularTypeG2 = 1,
  GFPCellularTypeG3 = 2,
  GFPCellularTypeG4 = 3,
  GFPCellularTypeG5 = 4,
};

@class NSString;

SWIFT_CLASS("_TtC16NaverAdsServices16GFPDeviceLocInfo")
@interface GFPDeviceLocInfo : NSObject
@property (nonatomic, copy) NSString * _Nonnull latitude;
@property (nonatomic, copy) NSString * _Nonnull longitude;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC16NaverAdsServices14GFPDeviceUtils")
@interface GFPDeviceUtils : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nullable preferredLanguageCode;)
+ (NSString * _Nullable)preferredLanguageCode SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nullable getDeviceCountryCode;)
+ (NSString * _Nullable)getDeviceCountryCode SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nullable localeIdentifier;)
+ (NSString * _Nullable)localeIdentifier SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) BOOL isStatusBarLandscape;)
+ (BOOL)isStatusBarLandscape SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) BOOL isIPad;)
+ (BOOL)isIPad SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull systemName;)
+ (NSString * _Nonnull)systemName SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull systemVer;)
+ (NSString * _Nonnull)systemVer SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull deviceModel;)
+ (NSString * _Nonnull)deviceModel SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) CGRect screenRect;)
+ (CGRect)screenRect SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) CGFloat nativeScaleFactor;)
+ (CGFloat)nativeScaleFactor SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) BOOL isSKAdNetworkAvaliable;)
+ (BOOL)isSKAdNetworkAvaliable SWIFT_WARN_UNUSED_RESULT;
+ (GFPDeviceLocInfo * _Nullable)getLocationInfo SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSURL;
@class UIImage;
@class NSData;
@class NSError;

SWIFT_CLASS("_TtC16NaverAdsServices16GFPDownloadCache")
@interface GFPDownloadCache : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) GFPDownloadCache * _Nonnull sharedInstance;)
+ (GFPDownloadCache * _Nonnull)sharedInstance SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (NSURL * _Nullable)urlToNSURL:(NSURL * _Nonnull)url SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isInvalidURL:(NSURL * _Nonnull)url SWIFT_WARN_UNUSED_RESULT;
- (void)updateDataWithURL:(NSURL * _Nonnull)url;
- (UIImage * _Nullable)imageWithURL:(NSURL * _Nonnull)url SWIFT_WARN_UNUSED_RESULT;
- (void)dataWithURL:(NSURL * _Nonnull)url completion:(void (^ _Nonnull)(NSData * _Nullable, NSURL * _Nullable, NSError * _Nullable))completion;
- (void)dataWithURL:(NSURL * _Nonnull)url timeoutInterval:(NSTimeInterval)timeoutInterval completion:(void (^ _Nonnull)(NSData * _Nullable, NSURL * _Nullable, NSError * _Nullable))completion;
- (void)imageWithURL:(NSURL * _Nonnull)url completion:(void (^ _Nonnull)(UIImage * _Nullable, NSError * _Nullable))completion;
- (void)imageWithURL:(NSURL * _Nonnull)url fullCompletion:(void (^ _Nonnull)(UIImage * _Nullable, NSURL * _Nullable, NSError * _Nullable))fullCompletion;
- (void)imageWithURL:(NSURL * _Nonnull)url timeoutInterval:(NSTimeInterval)timeoutInterval fullCompletion:(void (^ _Nonnull)(UIImage * _Nullable, NSURL * _Nullable, NSError * _Nullable))fullCompletion;
- (void)imageWithURL:(NSURL * _Nonnull)url timeoutInterval:(NSTimeInterval)timeoutInterval completion:(void (^ _Nonnull)(UIImage * _Nullable, NSURL * _Nullable, NSError * _Nullable))completion;
- (void)clearCache;
@end

@protocol GFPErrorCodeProviderDelegate;
@class NSCoder;

SWIFT_CLASS("_TtC16NaverAdsServices8GFPError")
@interface GFPError : NSError
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull errorMessageKey;)
+ (NSString * _Nonnull)errorMessageKey SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, weak) id <GFPErrorCodeProviderDelegate> _Nullable delegate;)
+ (id <GFPErrorCodeProviderDelegate> _Nullable)delegate SWIFT_WARN_UNUSED_RESULT;
+ (void)setDelegate:(id <GFPErrorCodeProviderDelegate> _Nullable)value;
- (nonnull instancetype)initWithCode:(NSInteger)code;
- (nonnull instancetype)initWithCode:(NSInteger)code userInfo:(NSDictionary<NSString *, id> * _Nullable)userInfo;
+ (GFPError * _Nonnull)errorWithCode:(NSInteger)code userInfo:(NSDictionary<NSString *, id> * _Nullable)dict SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)codeName SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWithDomain:(NSString * _Nonnull)domain code:(NSInteger)code userInfo:(NSDictionary<NSString *, id> * _Nullable)dict OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_PROTOCOL("_TtP16NaverAdsServices28GFPErrorCodeProviderDelegate_")
@protocol GFPErrorCodeProviderDelegate
- (NSDictionary<NSNumber *, NSString *> * _Nonnull)errorCodeNameDict SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)errorDomain SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)errorMessageKey SWIFT_WARN_UNUSED_RESULT;
@end

enum GFPLogLevel : NSInteger;

SWIFT_CLASS_NAMED("GFPLog")
@interface GFPLog : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) GFPLog * _Nonnull sharedInstance;)
+ (GFPLog * _Nonnull)sharedInstance SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@property (nonatomic) enum GFPLogLevel logLevel;
@property (nonatomic, readonly) BOOL hasLogLevel;
@property (nonatomic, readonly, copy) NSString * _Nonnull logLevelDesc;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull logIdentifier;)
+ (NSString * _Nonnull)logIdentifier SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)logLevelDescWith:(enum GFPLogLevel)logLevel SWIFT_WARN_UNUSED_RESULT;
+ (void)logMessage:(id _Nonnull)message method:(id _Nonnull)method logLevel:(enum GFPLogLevel)logLevel debugMode:(BOOL)debugMode;
@end


typedef SWIFT_ENUM(NSInteger, GFPLogLevel, open) {
  GFPLogLevelTrace = 0,
  GFPLogLevelDebug = 1,
  GFPLogLevelInfo = 2,
  GFPLogLevelError = 3,
  GFPLogLevelCritical = 4,
  GFPLogLevelNone = 5,
};


SWIFT_CLASS("_TtC16NaverAdsServices13GFPMergeUtils")
@interface GFPMergeUtils : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
+ (NSArray * _Nonnull)mergeWithArray1:(NSArray * _Nonnull)array1 array2:(NSArray * _Nonnull)array2 SWIFT_WARN_UNUSED_RESULT;
+ (NSDictionary<NSString *, NSArray<NSString *> *> * _Nonnull)mergeWithDict1:(NSDictionary<NSString *, NSArray<NSString *> *> * _Nonnull)dict1 dict2:(NSDictionary<NSString *, NSArray<NSString *> *> * _Nonnull)dict2 SWIFT_WARN_UNUSED_RESULT;
@end

typedef SWIFT_ENUM(NSInteger, GFPNetworkType, open) {
  GFPNetworkTypeUnknown = 0,
  GFPNetworkTypeEthernet = 1,
  GFPNetworkTypeWifi = 2,
  GFPNetworkTypeCellular = 3,
};


SWIFT_CLASS("_TtC16NaverAdsServices15GFPNetworkUtils")
@interface GFPNetworkUtils : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) GFPNetworkUtils * _Nonnull sharedInstance;)
+ (GFPNetworkUtils * _Nonnull)sharedInstance SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, copy) NSDictionary<NSString *, NSNumber *> * _Nullable info;
@property (nonatomic, readonly) enum GFPNetworkType networkType;
@property (nonatomic, readonly) enum GFPCellularType cellularType;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) BOOL isWIFI;)
+ (BOOL)isWIFI SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull networkTypeDescForInit;)
+ (NSString * _Nonnull)networkTypeDescForInit SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull networkTypeDescForAdcall;)
+ (NSString * _Nonnull)networkTypeDescForAdcall SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

typedef SWIFT_ENUM(NSInteger, GFPOriginType, open) {
  GFPOriginTypeX = 0,
  GFPOriginTypeY = 1,
};


SWIFT_CLASS("_TtC16NaverAdsServices12GFPRectUtils")
@interface GFPRectUtils : NSObject
+ (BOOL)isContainsNaN:(CGRect)rect SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

typedef SWIFT_ENUM(NSInteger, GFPSizeType, open) {
  GFPSizeTypeHeight = 0,
  GFPSizeTypeWidth = 1,
};


SWIFT_CLASS("_TtC16NaverAdsServices12GFPSizeUtils")
@interface GFPSizeUtils : NSObject
+ (BOOL)isSquareWith:(CGSize)size SWIFT_WARN_UNUSED_RESULT;
+ (CGFloat)ratioWith:(CGSize)size SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)isContainsNaN:(CGSize)size SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class UIViewController;
@class SKStoreProductViewController;

SWIFT_CLASS("_TtC16NaverAdsServices21GFPStoreProductHelper")
@interface GFPStoreProductHelper : NSObject <SKStoreProductViewControllerDelegate>
- (nonnull instancetype)initWithTarget:(UIViewController * _Nonnull)target parameters:(NSDictionary<NSString *, id> * _Nonnull)parameters OBJC_DESIGNATED_INITIALIZER;
- (void)loadProductWith:(void (^ _Nonnull)(BOOL))completion;
- (void)productViewControllerDidFinish:(SKStoreProductViewController * _Nonnull)viewController;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC16NaverAdsServices14GFPStringUtils")
@interface GFPStringUtils : NSObject
+ (BOOL)isValidUDID:(NSString * _Nullable)adID SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nullable)whiteSpaceTrimWith:(NSString * _Nullable)aString SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nullable)whiteSpaceNewLineTrimWith:(NSString * _Nullable)aString SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)hasLengthWhiteSpaceTrimWith:(NSString * _Nullable)aString SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)isEmptyWith:(NSString * _Nullable)aString SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nullable)encodeByAddingPercentEscapesWith:(NSString * _Nullable)aString SWIFT_WARN_UNUSED_RESULT;
+ (NSDictionary<NSString *, NSString *> * _Nullable)queryComponentsWith:(NSString * _Nullable)aString SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)isValidTimeFormatString:(NSString * _Nullable)timeString SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)isValidPercentFormatString:(NSString * _Nullable)percentString SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)isValidTimeOrPercentFormatString:(NSString * _Nullable)aString SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)filterJsonStringWith:(NSDictionary * _Nullable)dictionary SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)jsonStringWith:(NSDictionary * _Nullable)dictionary SWIFT_WARN_UNUSED_RESULT;
+ (NSDictionary * _Nonnull)filterHostMetaWith:(NSDictionary * _Nullable)aDict SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)hasHttpPrefix:(NSString * _Nullable)url SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)convertWith:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSNumber;

SWIFT_CLASS("_TtC16NaverAdsServices12GFPTimeUtils")
@interface GFPTimeUtils : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) NSNumber * _Nonnull currentUptime;)
+ (NSNumber * _Nonnull)currentUptime SWIFT_WARN_UNUSED_RESULT;
+ (NSTimeInterval)convertTimeFormatString:(NSString * _Nullable)timeString SWIFT_WARN_UNUSED_RESULT;
+ (NSTimeInterval)convertTimeOrPercentFormatString:(NSString * _Nullable)timeString withDurationTimeInterval:(NSTimeInterval)durationTimeInterval SWIFT_WARN_UNUSED_RESULT;
+ (NSInteger)secondFromTimeInterval:(NSTimeInterval)timeInterval SWIFT_WARN_UNUSED_RESULT;
@end

@class NSURLQueryItem;

SWIFT_CLASS("_TtC16NaverAdsServices11GFPURLUtils")
@interface GFPURLUtils : NSObject
+ (NSString * _Nullable)paramValueForKey:(NSString * _Nonnull)key inURL:(NSURL * _Nonnull)inURL SWIFT_WARN_UNUSED_RESULT;
+ (NSURL * _Nullable)URLWithString:(NSString * _Nonnull)aUrlString SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nullable)encodingURIComponent:(NSString * _Nonnull)string SWIFT_WARN_UNUSED_RESULT;
+ (NSURL * _Nullable)URLWithBaseString:(NSString * _Nonnull)baseStr queryItems:(NSArray<NSURLQueryItem *> * _Nonnull)queryItems SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)canOpenURL:(NSURL * _Nullable)aUrl SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)hasHttpPrefix:(NSURL * _Nonnull)url SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UIView;

SWIFT_CLASS("_TtC16NaverAdsServices12GFPViewUtils")
@interface GFPViewUtils : NSObject
+ (void)removeSubviews:(UIView * _Nullable)aView;
+ (CGRect)originalFrame:(UIView * _Nullable)aView SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)isVisibility:(UIView * _Nullable)aView SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)isViewableOnScreen:(UIView * _Nullable)aView SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)isTouchedOnScreenCenter:(UIView * _Nonnull)aView SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)isAtLeastHalfViewable:(UIView * _Nullable)aView SWIFT_WARN_UNUSED_RESULT;
+ (CGFloat)exposedPercentage:(UIView * _Nullable)aView SWIFT_WARN_UNUSED_RESULT;
+ (CGRect)visibleRectangle:(UIView * _Nullable)aView SWIFT_WARN_UNUSED_RESULT;
+ (void)fillSuperviewWithCenterAlignment:(UIView * _Nullable)aView;
+ (void)setConstraintWithFrameSize:(UIView * _Nullable)aView;
+ (void)setConstraintWithSize:(CGSize)size view:(UIView * _Nullable)view;
+ (void)matchSuperViewSize:(UIView * _Nullable)aView;
+ (void)matchSuperViewSafetyAreaThroughConstraints:(UIView * _Nullable)aView;
+ (void)arrangeToSuperviewWithXAttribute:(enum NSLayoutAttribute)xAttribute yAttribute:(enum NSLayoutAttribute)yAttribute view:(UIView * _Nullable)view;
+ (void)arrangeToSuperviewWithXAttribute:(enum NSLayoutAttribute)xAttribute yAttribute:(enum NSLayoutAttribute)yAttribute offsetX:(CGFloat)offsetX offsetY:(CGFloat)offsetY view:(UIView * _Nullable)view;
+ (void)arrangeToSuperViewApplyingSafeAreaWithXAttribute:(enum NSLayoutAttribute)xAttribute yAttribute:(enum NSLayoutAttribute)yAttribute offsetX:(CGFloat)offsetX offsetY:(CGFloat)offsetY view:(UIView * _Nullable)view;
+ (void)removeSizeConstraintOnSuperview:(UIView * _Nullable)aView;
+ (void)removeSizeConstraintOnSuperviewLayoutGuide:(UIView * _Nullable)aView;
+ (void)removeArrangeConstraintsOnSuperview:(UIView * _Nullable)aView;
+ (void)removeArrangeConstraintsOnSuperviewSafeLayoutGuide:(UIView * _Nullable)aView;
+ (void)removeSizeConstraintOnSelf:(UIView * _Nullable)aView;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface NSDictionary<KeyType, ObjectType> (SWIFT_EXTENSION(NaverAdsServices))
- (id _Nullable)objectWithKey:(id _Nullable)key SWIFT_WARN_UNUSED_RESULT;
- (id _Nullable)objectWithKey:(id _Nullable)key returnType:(Class _Nonnull)classType SWIFT_WARN_UNUSED_RESULT;
- (BOOL)boolWithKey:(id _Nullable)key SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)isEmpty:(NSDictionary * _Nullable)dict SWIFT_WARN_UNUSED_RESULT;
@end


@interface NSString (SWIFT_EXTENSION(NaverAdsServices))
- (NSString * _Nullable)encodingSubStringFromAIndex:(NSInteger)aIndex SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)encodingSubStringToAIndex:(NSInteger)aIndex SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isStringNumeric SWIFT_WARN_UNUSED_RESULT;
@end



@interface SKStoreProductViewController (SWIFT_EXTENSION(NaverAdsServices))
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) BOOL canUse;)
+ (BOOL)canUse SWIFT_WARN_UNUSED_RESULT;
+ (void)setCanUse:(BOOL)value;
+ (BOOL)canUseStoreProduct SWIFT_WARN_UNUSED_RESULT;
@end


@interface NSTimer (SWIFT_EXTENSION(NaverAdsServices))
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) double kAttachedCheckDefaultFrequency;)
+ (double)kAttachedCheckDefaultFrequency SWIFT_WARN_UNUSED_RESULT;
+ (NSTimer * _Nonnull)scheduledTimerWithTimeInterval:(NSTimeInterval)timeInterval block:(void (^ _Nonnull)(void))block repeats:(BOOL)repeats SWIFT_WARN_UNUSED_RESULT;
+ (NSTimer * _Nonnull)scheduledTimerWithTimeInterval:(NSTimeInterval)timeInterval block:(void (^ _Nonnull)(void))block repeats:(BOOL)repeats mode:(NSRunLoopMode _Nonnull)mode SWIFT_WARN_UNUSED_RESULT;
@end


@interface UIColor (SWIFT_EXTENSION(NaverAdsServices))
+ (UIColor * _Nonnull)colorWithRGBIntWith:(uint64_t)rgbInt SWIFT_WARN_UNUSED_RESULT;
+ (UIColor * _Nonnull)colorWithRGBIntWith:(uint64_t)rgbInt alpha:(CGFloat)alpha SWIFT_WARN_UNUSED_RESULT;
+ (UIColor * _Nonnull)colorWithRedWith:(CGFloat)red green:(CGFloat)green blue:(CGFloat)blue alpha:(CGFloat)alpha SWIFT_WARN_UNUSED_RESULT;
@end


@interface UIImageView (SWIFT_EXTENSION(NaverAdsServices))
- (void)startSpinningWith:(double)duration;
- (void)stopSpinning;
+ (UIImage * _Nullable)imageWithImageWithImage:(UIImage * _Nullable)image scaleSize:(CGSize)scaleSize SWIFT_WARN_UNUSED_RESULT;
@end

@class NSBundle;

@interface UIView (SWIFT_EXTENSION(NaverAdsServices))
+ (NSString * _Nonnull)frameWith:(CGRect)frame SWIFT_WARN_UNUSED_RESULT;
- (void)printSizeWithFunctionName:(NSArray<NSNumber *> * _Nonnull)functionName;
- (void)printOriginWithFunctionName:(NSArray<NSNumber *> * _Nonnull)functionName;
- (CGFloat)sideSafeAreaInsets SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)sizeWidth SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)sizeHeight SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)leftSafeInsets SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)rightSafeInsets SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)topSafeInsets SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)topBottomSafeAreaInsets SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)maxY SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)maxX SWIFT_WARN_UNUSED_RESULT;
- (void)showDebugBorderWithColorWithColor:(UIColor * _Nonnull)color;
- (void)addConstraintCenterWithAItem:(UIView * _Nullable)aItem toItem:(UIView * _Nullable)toItem attribute:(enum NSLayoutAttribute)attribute;
- (void)moveWith:(enum GFPAlignmentCenter)type;
- (void)moveWith:(enum GFPAlignmentCenter)type margin:(CGFloat)margin;
- (void)moveToTypeWith:(GFPAlignment)type margin:(CGFloat)margin;
- (void)moveToTypeWith:(GFPAlignment)type withView:(UIView * _Nullable)view gap:(CGFloat)gap;
- (void)alignWith:(GFPAlignment)type withView:(UIView * _Nullable)view;
- (void)alignWith:(GFPAlignment)type withView:(UIView * _Nullable)view gap:(CGFloat)gap;
- (void)alignCenterWith:(enum GFPAlignmentCenter)type withView:(UIView * _Nullable)view;
- (void)alignCenterWith:(enum GFPAlignmentCenter)type withView:(UIView * _Nullable)view gap:(CGFloat)gap;
- (void)updateSizeWith:(enum GFPSizeType)type value:(CGFloat)value;
- (void)updateSizeWith:(CGSize)aSize;
- (void)updateOriginWith:(CGPoint)aOrigin;
- (void)updateOriginTypeWith:(enum GFPOriginType)aType value:(CGFloat)aValue;
- (void)enableAccessibilityForImageSubviews;
- (void)disableAccessibilityForImageSubviews;
- (void)disableAccessibilityForSubviews;
+ (UIView * _Nullable)loadWithBundleWithABundle:(NSBundle * _Nullable)aBundle nibName:(NSString * _Nullable)nibName SWIFT_WARN_UNUSED_RESULT;
@end

#endif
#if defined(__cplusplus)
#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
