// Generated by Apple Swift version 5.5.1 (swiftlang-1300.0.31.4 clang-1300.0.29.6)
#ifndef GROOBEE_SWIFT_H
#define GROOBEE_SWIFT_H
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

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

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
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
@import UIKit;
@import UserNotifications;
@import UserNotificationsUI;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="Groobee",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class NSString;
@class NSNumber;
@class UIColor;
@class UIViewController;
@class GroobeeGoodsApi;
@class NSMutableDictionary;
@class GroobeePushApi;
@class CLLocation;
@class WKWebView;
@class NSURLRequest;
@class NSHTTPCookie;

SWIFT_CLASS("_TtC7Groobee15BaseAPIResponse")
@interface BaseAPIResponse : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) BaseAPIResponse * _Nonnull sharedInstance;)
+ (BaseAPIResponse * _Nonnull)sharedInstance SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getWebUrlKey SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getWebCookieIdKey SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getWebUserIdKey SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getPushCidKey SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getPushImgUrlKey SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getPushTypeKey SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getPushMsgCntKey SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getPushDeepLinkKey SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getPushUrlLinkKey SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getPushSendDtmKey SWIFT_WARN_UNUSED_RESULT;
- (void)setSendDtmWithPushSendDate:(NSString * _Nonnull)pushSendDate;
- (UIColor * _Nonnull)colorUtilsWithHex:(uint32_t)hex SWIFT_WARN_UNUSED_RESULT;
- (UIViewController * _Nonnull)currentViewController SWIFT_WARN_UNUSED_RESULT;
- (void)applicationWillResignActive;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (void)applicationWillTerminate;
- (void)willPresent;
- (void)applicationDidBecomeActive;
- (void)didReceiveRemoteNotificationWithUserInfo:(NSDictionary * _Nonnull)userInfo;
- (void)userNotificationCenterWithUserInfo:(NSDictionary * _Nonnull)userInfo;
- (void)setServiceKeyWithServiceKey:(NSString * _Nonnull)serviceKey;
- (void)setCookieIdWithCookieId:(NSString * _Nonnull)cookieId;
- (void)setUserIdWithUserId:(NSString * _Nonnull)userId;
- (void)setFcmTokenWithFcmToken:(NSString * _Nonnull)fcmToken;
- (void)setMemberIdWithMemberId:(NSString * _Nonnull)memberId;
- (void)initTestCall SWIFT_METHOD_FAMILY(none);
- (void)setAppBundleInformation;
- (void)setServiceKeyWithServiceKey:(NSString * _Nonnull)serviceKey packageName:(NSString * _Nonnull)packageName;
- (void)setServiceLoginWithMemberId:(NSString * _Nonnull)memberId;
- (void)setPushAgreeAPWithIsPushAgreeAP:(BOOL)isPushAgreeAP;
- (void)setPushAgreeAAWithIsPushAgreeAA:(BOOL)isPushAgreeAA;
- (void)setPushAgreeANWithIsPushAgreeAN:(BOOL)isPushAgreeAN;
- (void)setPushTokenWithPushToken:(NSString * _Nonnull)pushToken;
- (void)setAppAdIdWithAdId:(NSString * _Nonnull)adId;
- (void)setAppEtcWithAppName:(NSString * _Nonnull)appName appVersion:(NSString * _Nonnull)appVersion appOSVersion:(NSString * _Nonnull)appOSVersion;
- (void)setUserInfoWithId:(NSString * _Nonnull)id grade:(NSString * _Nonnull)grade age:(NSInteger)age gender:(NSString * _Nonnull)gender;
- (void)setMemberJoinWithMemberId:(NSString * _Nonnull)memberId;
- (void)setSearchKeywordWithSearchKwd:(NSString * _Nonnull)searchKwd;
- (void)setShoppingCartWithGoods:(NSArray<GroobeeGoodsApi *> * _Nonnull)goods;
- (void)setGoodsOrderWithGoods:(NSArray<GroobeeGoodsApi *> * _Nonnull)goods;
- (void)setGoodsOrderCompleteWithOrderNo:(NSString * _Nonnull)orderNo goods:(NSArray<GroobeeGoodsApi *> * _Nonnull)goods;
- (void)setViewGoodsWithGoods:(GroobeeGoodsApi * _Nonnull)goods;
- (void)setCategoryWithCateCd:(NSString * _Nonnull)cateCd cateNm:(NSString * _Nonnull)cateNm;
- (void)setCustomerDataWithCustomData:(NSMutableDictionary * _Nonnull)customData;
- (void)setPushMessagePRListWithOthersWithIsPushOpened:(BOOL)isPushOpened campaignKeyList:(NSArray<GroobeePushApi *> * _Nonnull)campaignKeyList removedCampaignKeyList:(NSArray<GroobeePushApi *> * _Nonnull)removedCampaignKeyList poDirectCampaignList:(NSArray<GroobeePushApi *> * _Nonnull)poDirectCampaignList openLinkUrl:(NSString * _Nonnull)openLinkUrl deepLinkUrl:(NSString * _Nonnull)deepLinkUrl;
- (void)setPushMessagePRListWithOthersWithIsPushOpened:(BOOL)isPushOpened campaignKeyList:(NSArray<GroobeePushApi *> * _Nonnull)campaignKeyList removedCampaignKeyList:(NSArray<GroobeePushApi *> * _Nonnull)removedCampaignKeyList;
- (void)setPushMessagePOIndirectWithIsPushOpened:(BOOL)isPushOpened campaignKeyList:(NSArray<GroobeePushApi *> * _Nonnull)campaignKeyList campaignKey:(NSArray<GroobeePushApi *> * _Nonnull)campaignKey openLinkUrl:(NSString * _Nonnull)openLinkUrl deepLinkUrl:(NSString * _Nonnull)deepLinkUrl;
- (void)setPushMessagePOIndirectWithIsPushOpened:(BOOL)isPushOpened campaignKeyList:(NSArray<GroobeePushApi *> * _Nonnull)campaignKeyList campaignKey:(NSArray<GroobeePushApi *> * _Nonnull)campaignKey;
- (void)setPushMessagePOIndirectWithIsPushOpened:(BOOL)isPushOpened campaignKeyList:(NSArray<GroobeePushApi *> * _Nonnull)campaignKeyList;
- (void)setPushMessagePODirectWithIsPushOpened:(BOOL)isPushOpened campaignKey:(NSArray<GroobeePushApi *> * _Nonnull)campaignKey;
- (void)setPushMessagePODirectWithIsPushOpened:(BOOL)isPushOpened campaignKey:(NSArray<GroobeePushApi *> * _Nonnull)campaignKey openLinkUrl:(NSString * _Nonnull)openLinkUrl deepLinkUrl:(NSString * _Nonnull)deepLinkUrl;
- (void)setScreenDataWithScreenName:(NSString * _Nonnull)screenName;
- (void)setAppSessionStartWithIsTerminated:(BOOL)isTerminated;
- (void)setAppSessionEndWithIsTerminated:(BOOL)isTerminated iosSessionDtm:(NSString * _Nonnull)iosSessionDtm;
- (void)setAppLocationWithLatitude:(double)latitude longitude:(double)longitude;
- (void)locationInformationWithUserLocation:(CLLocation * _Nonnull)userLocation;
- (void)webViewCookiesAllWithWebview:(WKWebView * _Nonnull)webview urlRequest:(NSURLRequest * _Nonnull)urlRequest;
- (void)webViewCookiesWithCookie:(NSHTTPCookie * _Nonnull)cookie;
- (void)networkConnectionWithBaseDomainUrl:(NSString * _Nonnull)baseDomainUrl subDomainUrl:(NSString * _Nonnull)subDomainUrl parameters:(NSString * _Nonnull)parameters functionType:(NSString * _Nonnull)functionType completion:(void (^ _Nonnull)(NSString * _Nullable))completion;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UNNotification;
@class UNNotificationResponse;
@class NSBundle;
@class NSCoder;

SWIFT_CLASS("_TtC7Groobee23BaseNotificationContent") SWIFT_AVAILABILITY(ios,introduced=10.0)
@interface BaseNotificationContent : UIViewController <UNNotificationContentExtension>
- (void)viewDidLoad;
- (void)didReceiveNotification:(UNNotification * _Nonnull)notification;
- (void)didReceiveNotificationResponse:(UNNotificationResponse * _Nonnull)response completionHandler:(SWIFT_NOESCAPE void (^ _Nonnull)(UNNotificationContentExtensionResponseOption))completion;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

@class UNNotificationRequest;
@class UNNotificationContent;

SWIFT_CLASS("_TtC7Groobee23BaseNotificationService") SWIFT_AVAILABILITY(ios,introduced=10.0)
@interface BaseNotificationService : UNNotificationServiceExtension
- (void)didReceiveNotificationRequest:(UNNotificationRequest * _Nonnull)request withContentHandler:(void (^ _Nonnull)(UNNotificationContent * _Nonnull))contentHandler;
- (void)serviceExtensionTimeWillExpire;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class GroobeeGoodsApiBuilder;

SWIFT_CLASS("_TtC7Groobee15GroobeeGoodsApi")
@interface GroobeeGoodsApi : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) GroobeeGoodsApi * _Nonnull sharedInstance;)
+ (GroobeeGoodsApi * _Nonnull)sharedInstance SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (nonnull instancetype)initWithGoodsNm:(NSString * _Null_unspecified)goodsNm goodsCd:(NSString * _Nullable)goodsCd goodsCate:(NSString * _Nullable)goodsCate goodsCateNm:(NSString * _Nullable)goodsCateNm goodsAmt:(NSString * _Nullable)goodsAmt goodsPrc:(NSString * _Nullable)goodsPrc goodsSalePrc:(NSString * _Nullable)goodsSalePrc goodsCnt:(NSString * _Nullable)goodsCnt goodsImg:(NSString * _Nullable)goodsImg OBJC_DESIGNATED_INITIALIZER;
- (GroobeeGoodsApiBuilder * _Nonnull)withGoodsNmWithGoodsNm:(NSString * _Nonnull)goodsNm SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtCC7Groobee15GroobeeGoodsApi22GroobeeGoodsApiBuilder")
@interface GroobeeGoodsApiBuilder : NSObject
- (GroobeeGoodsApiBuilder * _Nonnull)andGoodsCdWithGoodsCd:(NSString * _Nonnull)goodsCd SWIFT_WARN_UNUSED_RESULT;
- (GroobeeGoodsApiBuilder * _Nonnull)andGoodsCateWithGoodsCate:(NSString * _Nonnull)goodsCate SWIFT_WARN_UNUSED_RESULT;
- (GroobeeGoodsApiBuilder * _Nonnull)andGoodsCateNmWithGoodsCateNm:(NSString * _Nonnull)goodsCateNm SWIFT_WARN_UNUSED_RESULT;
- (GroobeeGoodsApiBuilder * _Nonnull)andGoodsAmtWithGoodsAmt:(NSString * _Nonnull)goodsAmt SWIFT_WARN_UNUSED_RESULT;
- (GroobeeGoodsApiBuilder * _Nonnull)andGoodsPrcWithGoodsPrc:(NSString * _Nonnull)goodsPrc SWIFT_WARN_UNUSED_RESULT;
- (GroobeeGoodsApiBuilder * _Nonnull)andGoodsSalePrcWithGoodsSalePrc:(NSString * _Nonnull)goodsSalePrc SWIFT_WARN_UNUSED_RESULT;
- (GroobeeGoodsApiBuilder * _Nonnull)andGoodsCntWithGoodsCnt:(NSString * _Nonnull)goodsCnt SWIFT_WARN_UNUSED_RESULT;
- (GroobeeGoodsApiBuilder * _Nonnull)andGoodsImgWithGoodsImg:(NSString * _Nonnull)goodsImg SWIFT_WARN_UNUSED_RESULT;
- (GroobeeGoodsApi * _Nonnull)build SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC7Groobee14GroobeePushApi")
@interface GroobeePushApi : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


@class NSURL;
@class NSData;
@class NSError;

@interface NSURLSession (SWIFT_EXTENSION(Groobee))
+ (void)downloadImageAtURL:(NSURL * _Nonnull)url withCompletionHandler:(void (^ _Nonnull)(NSData * _Nullable, NSError * _Nullable))completionHandler;
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif
