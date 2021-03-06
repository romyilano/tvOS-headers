//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <MediaPlayer/MPDetailSliderDelegate-Protocol.h>
#import <MediaPlayer/MPVideoOverlay-Protocol.h>
#import <MediaPlayer/UIPopoverPresentationControllerDelegate-Protocol.h>

@class MPAVController, MPAVItem, MPAudioAndSubtitlesController, MPDetailSlider, MPKnockoutButton, MPVolumeSlider, NSArray, NSLayoutConstraint, NSString, UIActivityIndicatorView, UIButton, UILabel, UINavigationBar, UIStatusBar, _UIBackdropView;
@protocol MPVideoControllerProtocol, MPVideoOverlayDelegate;

@interface MPVideoPlaybackOverlayView : UIView <UIPopoverPresentationControllerDelegate, MPVideoOverlay, MPDetailSliderDelegate>
{
    MPDetailSlider *_scrubber;
    _UIBackdropView *_bottomBarBackdropView;
    MPKnockoutButton *_playPauseButton;
    MPKnockoutButton *_fullscreenButton;
    MPKnockoutButton *_pictureInPictureButton;
    _UIBackdropView *_topBarBackdropView;
    UIStatusBar *_statusBar;
    UIButton *_doneButton;
    UIActivityIndicatorView *_loadingIndicator;
    UILabel *_loadingLabel;
    UIButton *_scaleButton;
    UILabel *_scrubInstructions1;
    UILabel *_scrubInstructions2;
    MPVolumeSlider *_volumeSlider;
    MPKnockoutButton *_leftButton;
    MPKnockoutButton *_rightButton;
    UIButton *_audioAndSubtitlesButton;
    UIView *_topBarLayoutGuide;
    UIView *_topBarItemsGuide;
    UIView *_bottomBarTopLayoutGuide;
    UIView *_bottomBarBottomLayoutGuide;
    UIView *_bottomBarItemsGuide;
    MPAudioAndSubtitlesController *_audioAndSubtitlesController;
    _Bool _ticking;
    _Bool _ignoreTouchUp;
    _Bool _shouldResumePlayback;
    int _seekDirection;
    NSLayoutConstraint *_topBarBottomConstraint;
    NSLayoutConstraint *_bottomBarHeightConstraint;
    NSLayoutConstraint *_topItemsTrailingConstraint;
    NSLayoutConstraint *_bottomItemsRightConstraint;
    NSLayoutConstraint *_volumeSliderRightConstraint;
    NSLayoutConstraint *_volumeSliderWidthConstraint;
    NSArray *_topItemsConstraints;
    NSArray *_bottomItemsConstraints;
    NSArray *_topItems;
    NSArray *_bottomItems;
    _Bool allowsWirelessPlayback;
    _Bool navigationBarHidden;
    _Bool _automaticallyHandleTransportControls;
    _Bool _allowsExitFromFullscreen;
    _Bool _allowsPictureInPicture;
    id <MPVideoOverlayDelegate> _delegate;
    MPAVController *_player;
    MPAVItem *_item;
    unsigned long long disabledParts;
    unsigned long long desiredParts;
    unsigned long long visibleParts;
    id <MPVideoControllerProtocol> videoViewController;
    long long _style;
}

@property(nonatomic) _Bool allowsPictureInPicture; // @synthesize allowsPictureInPicture=_allowsPictureInPicture;
@property(nonatomic) _Bool allowsExitFromFullscreen; // @synthesize allowsExitFromFullscreen=_allowsExitFromFullscreen;
@property(nonatomic) _Bool automaticallyHandleTransportControls; // @synthesize automaticallyHandleTransportControls=_automaticallyHandleTransportControls;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) _Bool navigationBarHidden; // @synthesize navigationBarHidden;
@property(nonatomic) __weak id <MPVideoControllerProtocol> videoViewController; // @synthesize videoViewController;
@property(nonatomic) unsigned long long visibleParts; // @synthesize visibleParts;
@property(nonatomic) unsigned long long desiredParts; // @synthesize desiredParts;
@property(nonatomic) unsigned long long disabledParts; // @synthesize disabledParts;
@property(nonatomic) _Bool allowsWirelessPlayback; // @synthesize allowsWirelessPlayback;
@property(retain, nonatomic) MPAVItem *item; // @synthesize item=_item;
@property(retain, nonatomic) MPAVController *player; // @synthesize player=_player;
@property(nonatomic) __weak id <MPVideoOverlayDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)hideAlternateTracks;
- (void)showAlternateTracks;
- (void)setDesiredParts:(unsigned long long)arg1 animate:(_Bool)arg2;
- (void)setVisibleParts:(unsigned long long)arg1 animate:(_Bool)arg2;
@property(readonly, retain, nonatomic) UINavigationBar *navigationBar;
- (void)_updateVolumeSlider;
- (_Bool)updateTimeBasedValues;
- (void)_updateLoadingIndicator;
- (void)_updateScaleButton;
- (void)_unregisterForPlayerNotifications:(id)arg1;
- (void)_unregisterForItemNotifications:(id)arg1;
- (void)_startSeeking;
- (void)_notifyDelegateOfUserEventEnd:(long long)arg1;
- (void)_notifyDelegateOfUserEventCancel:(long long)arg1;
- (void)_notifyDelegateOfUserEventBegin:(long long)arg1;
- (void)_notifyDelegateOfUserEvent:(long long)arg1;
- (void)_registerForPlayerNotifications:(id)arg1;
- (void)_registerForItemNotifications:(id)arg1;
- (id)_newFrostedGlassBackdropView;
- (id)_imageNamed:(id)arg1;
- (void)_configureTransportControls;
- (void)_configureAuxiliaryButtons:(_Bool)arg1;
- (void)_setButtons:(id)arg1 inBar:(id)arg2 animated:(_Bool)arg3;
- (void)_videoViewDidMoveToWindow:(id)arg1;
- (void)_tick:(id)arg1;
- (void)_seekabilityChanged:(id)arg1;
- (void)_playbackStateChanged:(id)arg1;
- (void)_itemReadyToPlay:(id)arg1;
- (void)_itemChanged:(id)arg1;
- (void)_effectiveScaleModeDidChange:(id)arg1;
- (void)_durationAvailable:(id)arg1;
- (void)_alternateTracksAvailable:(id)arg1;
- (void)_activeAudioRouteDidChange:(id)arg1;
- (void)_skipButtonTouchUpOutside:(id)arg1;
- (void)_skipButtonTouchUpInside:(id)arg1;
- (void)_skipButtonTouchCancel:(id)arg1;
- (void)_skipButtonTouchDown:(id)arg1;
- (void)_scaleButtonTapped:(id)arg1;
- (void)_playPauseButtonTapped:(id)arg1;
- (void)_observeControl:(id)arg1;
- (void)_pictureInPictureButtonTapped:(id)arg1;
- (void)_fullscreenButtonTapped:(id)arg1;
- (void)_doneButtonTapped:(id)arg1;
- (void)_buttonInteractionEnded:(id)arg1;
- (void)_buttonInteractionCanceled:(id)arg1;
- (void)_buttonInteractionBegan:(id)arg1;
- (void)_audioAndSubtitlesButtonTapped:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_handleDismissAudioAndSubtitlesController;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)_showScrubInstructions;
- (void)_hideScrubInstructions;
- (void)detailSliderTrackingDidCancel:(id)arg1;
- (void)detailSliderTrackingDidEnd:(id)arg1;
- (void)detailSliderTrackingDidBegin:(id)arg1;
- (void)detailSlider:(id)arg1 didChangeValue:(float)arg2;
- (void)detailSlider:(id)arg1 didChangeScrubSpeed:(long long)arg2;
- (void)stopTicking;
- (void)startTicking;
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2 animateAlongside:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHidden:(_Bool)arg1;
@property(readonly, nonatomic) double bottomBarHeight;
@property(nonatomic) _Bool allowsDetailScrubbing;
@property(nonatomic) _Bool allowsScrubbing;
- (void)removeFromSuperview;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void)didMoveToWindow;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

