//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "NSObject.h"

#import "UIActionSheetDelegate.h"
#import "UIAlertViewDelegate.h"

@class GUAlertView, GmmOpenHttpUrlService, NSString, NSURL, UIActionSheet;

@interface DefaultBrowserHandler : NSObject <UIActionSheetDelegate, UIAlertViewDelegate>
{
    BOOL _defaultBrowserIsOpen;
    NSString *_defaultBrowserAppId;
    GmmOpenHttpUrlService *_gmmOpenHttpUrlService;
    UIActionSheet *_browsersListActionSheet;
    NSString *_defaultBrowserCandidate;
    NSURL *_urlToBeOpened;
    GUAlertView *_alertView;
}

+ (id)instance;
+ (void)initialize;
@property(nonatomic) GUAlertView *alertView; // @synthesize alertView=_alertView;
@property(nonatomic) BOOL defaultBrowserIsOpen; // @synthesize defaultBrowserIsOpen=_defaultBrowserIsOpen;
@property(copy, nonatomic) NSURL *urlToBeOpened; // @synthesize urlToBeOpened=_urlToBeOpened;
@property(copy, nonatomic) NSString *defaultBrowserCandidate; // @synthesize defaultBrowserCandidate=_defaultBrowserCandidate;
@property(nonatomic) UIActionSheet *browsersListActionSheet; // @synthesize browsersListActionSheet=_browsersListActionSheet;
@property(retain, nonatomic) GmmOpenHttpUrlService *gmmOpenHttpUrlService; // @synthesize gmmOpenHttpUrlService=_gmmOpenHttpUrlService;
@property(retain, nonatomic) NSString *defaultBrowserAppId; // @synthesize defaultBrowserAppId=_defaultBrowserAppId;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)willPresentActionSheet:(id)arg1;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (BOOL)isBuiltInBrowserDefault;
- (BOOL)isUrlValid:(id)arg1;
- (void)presentActionSheetWithAvailableBrowsers;
- (void)disableOrientationNotifications;
- (void)enableOrientationNotifications;
- (void)didRotate;
- (void)hideAlert;
- (void)hideActionSheet;
- (void)writeDefaultBrowserAppIdToOptionsDB:(id)arg1;
- (id)readDefaultBrowserAppIdFromOptionsDB;
- (id)idForBrowserWithName:(id)arg1;
- (id)nameForBrowserWithId:(id)arg1;
- (id)availableBrowsersNames;
- (BOOL)openUrlUsingBuiltInBrowser:(id)arg1;
- (BOOL)openDefaultBrowser;
- (BOOL)openUrlUsingDefaultBrowser:(id)arg1;
- (void)removeBuiltInBrowserId;
- (void)refreshAvailableBrowsers;
- (BOOL)areGDBrowsersAvailable;
- (void)dealloc;
- (id)init;

@end
