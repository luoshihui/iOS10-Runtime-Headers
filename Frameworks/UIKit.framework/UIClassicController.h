/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIZoomViewController, UIView, UIWindow, UIStatusBarViewController;

@interface UIClassicController : NSObject  {
    UIWindow *_window;
    UIView *_chromeView;
    UIStatusBarViewController *_statusBarViewController;
    UIZoomViewController *_zoomViewController;
    BOOL _hidesClassicChrome;
    BOOL _hidesStatusBarFiller;
}

+ (id)sharedClassicController;

- (void)dealloc;
- (void)setDrawsStatusBarFiller:(BOOL)arg1;
- (BOOL)drawsStatusBarFiller;
- (void)_classicChangeStatusBarOrientationFinished:(id)arg1 finished:(BOOL)arg2 context:(id)arg3;
- (void)_classicChangeStatusBarOrientation:(id)arg1;
- (void)setZoomed:(BOOL)arg1;
- (BOOL)isZoomed;
- (BOOL)_shouldHideStatusBar;
- (BOOL)_supportsZoom;
- (void)setZoomed:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)isClassicControlWindow:(id)arg1;
- (void)_setupWindow;
- (id)_window;
- (void)setStatusBarOrientation:(int)arg1 animationParameters:(id)arg2;
- (void)setStatusBarHidden:(BOOL)arg1 animationParameters:(id)arg2;
- (void)setStatusBarStyle:(int)arg1 animationParameters:(id)arg2;
- (void)_initializeStatusBarOrientation;

@end