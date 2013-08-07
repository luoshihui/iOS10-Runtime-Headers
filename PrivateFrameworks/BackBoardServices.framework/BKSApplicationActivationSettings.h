/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@class NSURL, NSData, BKSApplicationLaunchSettings;

@interface BKSApplicationActivationSettings : NSObject <NSCopying, BKSXPCCoding> {
    BOOL _animated;
    BOOL _suspended;
    BOOL _suspendedEventsOnly;
    BOOL _safe;
    BOOL _firstLaunchAfterBoot;
    BOOL _enableTests;
    BOOL _forRemoteNotification;
    BOOL _forLocalNotification;
    BOOL _flip;
    BOOL _statusBarHidden;
    BOOL _classic;
    BOOL _zoomInClassic;
    BOOL _forBackgroundContentFetching;
    BOOL _forBackgroundURLSession;
    BKSApplicationLaunchSettings *_launchSettings;
    NSURL *_openURL;
    NSData *_payload;
    int _interfaceOrientation;
    int _statusBarStyle;
    double _userLaunchEventTime;
    double _watchdogExtension;
}

@property(retain) BKSApplicationLaunchSettings * launchSettings;
@property BOOL animated;
@property BOOL suspended;
@property BOOL suspendedEventsOnly;
@property(retain) NSURL * openURL;
@property(retain) NSData * payload;
@property BOOL safe;
@property BOOL firstLaunchAfterBoot;
@property BOOL enableTests;
@property double userLaunchEventTime;
@property double watchdogExtension;
@property BOOL forRemoteNotification;
@property BOOL forLocalNotification;
@property BOOL flip;
@property int interfaceOrientation;
@property int statusBarStyle;
@property BOOL statusBarHidden;
@property BOOL classic;
@property BOOL zoomInClassic;
@property BOOL forBackgroundContentFetching;
@property BOOL forBackgroundURLSession;


- (void)setSuspended:(BOOL)arg1;
- (void)setForBackgroundURLSession:(BOOL)arg1;
- (void)setForBackgroundContentFetching:(BOOL)arg1;
- (void)setZoomInClassic:(BOOL)arg1;
- (void)setClassic:(BOOL)arg1;
- (void)setFlip:(BOOL)arg1;
- (void)setForLocalNotification:(BOOL)arg1;
- (void)setForRemoteNotification:(BOOL)arg1;
- (void)setWatchdogExtension:(double)arg1;
- (void)setUserLaunchEventTime:(double)arg1;
- (void)setEnableTests:(BOOL)arg1;
- (void)setFirstLaunchAfterBoot:(BOOL)arg1;
- (void)setSafe:(BOOL)arg1;
- (void)setPayload:(id)arg1;
- (void)setOpenURL:(id)arg1;
- (void)setSuspendedEventsOnly:(BOOL)arg1;
- (void)setLaunchSettings:(id)arg1;
- (BOOL)forBackgroundURLSession;
- (BOOL)forBackgroundContentFetching;
- (BOOL)zoomInClassic;
- (BOOL)classic;
- (BOOL)statusBarHidden;
- (int)statusBarStyle;
- (int)interfaceOrientation;
- (BOOL)flip;
- (BOOL)forLocalNotification;
- (BOOL)forRemoteNotification;
- (double)watchdogExtension;
- (double)userLaunchEventTime;
- (BOOL)enableTests;
- (BOOL)firstLaunchAfterBoot;
- (BOOL)safe;
- (id)payload;
- (id)openURL;
- (BOOL)suspendedEventsOnly;
- (id)launchSettings;
- (id)initWithSettings:(id)arg1 zone:(struct _NSZone { }*)arg2;
- (id)initWithXPCDictionary:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (void)setAnimated:(BOOL)arg1;
- (BOOL)animated;
- (BOOL)suspended;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setInterfaceOrientation:(int)arg1;
- (void)setStatusBarHidden:(BOOL)arg1;
- (void)setStatusBarStyle:(int)arg1;

@end