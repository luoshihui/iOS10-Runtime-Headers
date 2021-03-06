/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVPlayerViewController : UIViewController <AVPictureInPictureControllerDelegate, UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate> {
    id  _activeAudioRouteDidChangeObserver;
    bool  _allowsPictureInPicturePlayback;
    bool  _animateFullScreenTransition;
    bool  _animateFullScreenTransitionForPresenting;
    id  _applicationSuspendedObserver;
    AVAudioOnlyIndicatorView * _audioOnlyIndicatorView;
    UIView * _containerView;
    UIView * _contentOverlayView;
    UIView * _contentView;
    UIView * _controlsView;
    <AVPlayerViewControllerDelegate> * _delegate;
    struct { 
        bool playerViewControllerWillStartPictureInPicture; 
        bool playerViewControllerDidStartPictureInPicture; 
        bool playerViewController_failedToStartPictureInPictureWithError; 
        bool playerViewControllerWillStopPictureInPicture; 
        bool playerViewControllerDidStopPictureInPicture; 
        bool playerViewControllerShouldAutomaticallyDismissAtPictureInPictureStart; 
        bool playerViewController_restoreUserInterfaceForPictureInPictureStopWithCompletionHandler; 
        bool playerViewController_shouldExitFullScreenWithReason; 
    }  _delegateRespondsTo;
    AVExternalPlaybackIndicatorView * _externalPlaybackIndicatorView;
    AVFullScreenViewController * _fullScreenViewController;
    AVTouchIgnoringView * _iAdPrerollView;
    bool  _isAnimatingPlaybackControlsViewVisibility;
    bool  _isHidingPlaybackControlsViewForPictureInPicturePlayback;
    bool  _isShowingPlaybackControlsViewAfterUserInteraction;
    bool  _isShowingPlaybackControlsViewForAudioOnlyContent;
    bool  _isShowingPlaybackControlsViewForPlayingOnExternalScreen;
    bool  _isShowingPlaybackControlsViewForUnsupportedContent;
    bool  _isShowingPlaybackControlsViewForUserInteraction;
    bool  _isTransitioningToOrFromFullScreen;
    NSTimer * _loadingIndicatorTimer;
    AVLoadingIndicatorView * _loadingIndicatorView;
    id  _nowPlayingControllerDidReceiveStopCommandEventObserver;
    AVNowPlayingInfoController * _nowPlayingInfoController;
    AVPictureInPictureController * _pictureInPictureController;
    NSDictionary * _pixelBufferAttributes;
    AVPlaybackControlsViewController * _playbackControlsViewController;
    bool  _playbackControlsViewControllerPictureInPictureButtonEnabled;
    long long  _playbackControlsViewControllerScaleButtonType;
    bool  _playbackControlsViewControllerShouldShowLoadingIndicator;
    bool  _playbackControlsViewControllerShowsScaleButton;
    long long  _playbackControlsViewVisibilityCounter;
    bool  _playbackControlsViewVisibilityNeedsUpdate;
    NSTimer * _playbackControlsViewVisibilityTimer;
    AVPlayerController * _playerController;
    __AVPlayerLayerView * _playerLayerView;
    bool  _playerShouldAutoplay;
    id  _screenDidConnectObserver;
    id  _screenDidDisconnectObserver;
    id  _screenModeDidChangeObserver;
    UIWindow * _secondScreenWindow;
    bool  _showsExitFullScreenButton;
    bool  _showsPlaybackControls;
    bool  _showsPlaybackControlsView;
    bool  _transitionFromFullScreenOrDismissViewControllerWhenEnteringBackgroundAfterPictureInPictureStart;
    AVUnsupportedContentIndicatorView * _unsupportedContentIndicatorView;
    long long  _videoGravity;
    bool  _viewIsFullScreen;
}

@property (nonatomic) bool allowsPictureInPicturePlayback;
@property (nonatomic, readonly) UIView *contentOverlayView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AVPlayerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIView *iAdPrerollView;
@property (getter=isPictureInPictureActive, nonatomic, readonly) bool pictureInPictureActive;
@property (getter=isPictureInPicturePossible, nonatomic, readonly) bool pictureInPicturePossible;
@property (getter=isPictureInPictureSuspended, nonatomic, readonly) bool pictureInPictureSuspended;
@property (nonatomic, readonly) bool pictureInPictureWasStartedWhenEnteringBackground;
@property (nonatomic, copy) NSDictionary *pixelBufferAttributes;
@property (nonatomic, retain) AVPlayer *player;
@property (nonatomic, retain) AVPlayerController *playerController;
@property (getter=isReadyForDisplay, nonatomic, readonly) bool readyForDisplay;
@property (nonatomic) bool showsExitFullScreenButton;
@property (nonatomic) bool showsPlaybackControls;
@property (readonly) Class superclass;
@property (nonatomic) bool updatesNowPlayingInfoCenter;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } videoBounds;
@property (nonatomic, copy) NSString *videoGravity;

// Image: /System/Library/Frameworks/AVKit.framework/AVKit

+ (void)initialize;
+ (id)keyPathsForValuesAffectingPictureInPictureActive;
+ (id)keyPathsForValuesAffectingPictureInPicturePossible;
+ (id)keyPathsForValuesAffectingPictureInPictureSuspended;
+ (id)keyPathsForValuesAffectingPictureInPictureWasStartedWhenEnteringBackground;
+ (id)keyPathsForValuesAffectingPixelBufferAttributes;
+ (id)keyPathsForValuesAffectingPlayer;
+ (id)keyPathsForValuesAffectingReadyForDisplay;
+ (id)keyPathsForValuesAffectingVideoBounds;
+ (id)keyPathsForValuesAffectingVideoGravity;

- (void).cxx_destruct;
- (void)_fireLoadingIndicatorTimer:(id)arg1;
- (void)_firePlaybackControlsViewVisibilityTimer:(id)arg1;
- (void)_handleDoubleDoubleTapGesture:(id)arg1;
- (void)_handleDoubleTapGesture:(id)arg1;
- (void)_handlePinchGesture:(id)arg1;
- (void)_handleSingleTapGesture:(id)arg1;
- (void)_hidePlaybackControlsViewIfPossible;
- (void)_hidePlaybackControlsViewIfPossibleAfterDelayIfPlaying;
- (void)_hidePlaybackControlsViewIfPossibleAfterDelayIfPlayingWithDelay:(double)arg1;
- (void)_hidePlaybackControlsViewIfPossibleUntilFurtherUserInteraction;
- (bool)_ignoreAppSupportedOrientations;
- (bool)_isAudioOnlyContent;
- (bool)_isUnsupportedContent;
- (void)_mediaSelectionDoneButtonTapped:(id)arg1;
- (void)_setPlaybackControlsViewVisibilityNeedsUpdate;
- (void)_showOrHidePlaybackControlsView;
- (void)_showPlaybackControlsViewIfNeeded;
- (void)_showPlaybackControlsViewIfNeededAndHideIfPossibleAfterDelayIfPlaying;
- (void)_showPlaybackControlsViewIfNeededAndHideIfPossibleAfterDelayIfPlayingWithDelay:(double)arg1;
- (bool)_showsPlaybackControlsView;
- (void)_togglePictureInPicture;
- (void)_transitionFromFullScreenViewControllerAnimated:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)_transitionFromFullScreenViewControllerWithReason:(long long)arg1 animated:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)_transitionToFullScreenViewControllerAnimated:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)_updateAudioOnlyIndicatorView;
- (void)_updateExternalPlaybackIndicatorView;
- (void)_updatePictureInPictureButtonEnabled;
- (void)_updatePlaybackControlsViewController;
- (void)_updatePlaybackControlsViewVisibilityForAudioOnlyContent;
- (void)_updatePlaybackControlsViewVisibilityForPlayingOnExternalScreen;
- (void)_updatePlaybackControlsViewVisibilityForUnsupportedContent;
- (void)_updatePlaybackControlsViewVisibilityIfNeeded;
- (void)_updatePlayerLayerViewAndContentOverlayView;
- (void)_updateScaleButtonType;
- (void)_updateShowsScaleButton;
- (void)_updateUnsupportedContentIndicatorView;
- (void)_updateViewIsFullScreen:(bool)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (bool)allowsPictureInPicturePlayback;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)animationEnded:(bool)arg1;
- (bool)canBecomeFirstResponder;
- (id)childViewControllerForStatusBarHidden;
- (id)contentOverlayView;
- (void)dealloc;
- (id)delegate;
- (void)doneButtonTapped:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)enterFullScreenAnimated:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)exitFullScreenAnimated:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)fullScreenButtonTapped:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)hidePlaybackControlsViewForTouchUp;
- (id)iAdPrerollView;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithPlayerLayerView:(id)arg1;
- (bool)isPictureInPictureActive;
- (bool)isPictureInPicturePossible;
- (bool)isPictureInPictureSuspended;
- (bool)isReadyForDisplay;
- (void)loadView;
- (void)mediaSelectionButtonTapped:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)pictureInPictureButtonTapped:(id)arg1;
- (void)pictureInPictureController:(id)arg1 failedToStartPictureInPictureWithError:(id)arg2;
- (void)pictureInPictureController:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(id /* block */)arg2;
- (void)pictureInPictureControllerDidStartPictureInPicture:(id)arg1;
- (void)pictureInPictureControllerDidStopPictureInPicture:(id)arg1;
- (void)pictureInPictureControllerWillStartPictureInPicture:(id)arg1;
- (void)pictureInPictureControllerWillStopPictureInPicture:(id)arg1;
- (bool)pictureInPictureWasStartedWhenEnteringBackground;
- (id)pixelBufferAttributes;
- (id)player;
- (id)playerController;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (long long)preferredWhitePointAdaptivityStyle;
- (id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2;
- (void)scaleButtonTapped:(id)arg1;
- (void)setAllowsPictureInPicturePlayback:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPixelBufferAttributes:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setPlayerController:(id)arg1;
- (void)setShowsExitFullScreenButton:(bool)arg1;
- (void)setShowsPlaybackControls:(bool)arg1;
- (void)setUpdatesNowPlayingInfoCenter:(bool)arg1;
- (void)setVideoGravity:(id)arg1;
- (void)showPlaybackControlsViewForTouchDown;
- (void)showPlaybackControlsViewForVolumeChange;
- (bool)showsExitFullScreenButton;
- (bool)showsPlaybackControls;
- (void)startPictureInPicture;
- (void)stopPictureInPicture;
- (void)togglePlayback:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (bool)updatesNowPlayingInfoCenter;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })videoBounds;
- (id)videoGravity;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

// Image: /System/Library/Frameworks/iAd.framework/iAd

+ (void)preparePrerollAds;

- (id)_iAd_prerollController;
- (void)cancelPreroll;
- (void)playPrerollAdWithCompletionHandler:(id /* block */)arg1;
- (void)set_iAd_prerollController:(id)arg1;

@end
