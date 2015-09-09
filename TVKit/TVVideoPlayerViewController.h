//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <TVKit/TVMainVideoViewControllerDelegate-Protocol.h>
#import <TVKit/TVRelatedContentLoaderDelegate-Protocol.h>
#import <TVKit/TVRelatedContentViewControllerDelegate-Protocol.h>
#import <TVKit/TVSMediaCacheManagerResponder-Protocol.h>
#import <TVKit/TVVideoNowPlayingMetadataViewControllerDelegate-Protocol.h>
#import <TVKit/TVVideoNowPlayingViewControllerDelegate-Protocol.h>
#import <TVKit/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSDate, NSDictionary, NSString, NSTimer, TVInteractionGestureRecognizer, TVMainVideoViewController, TVRelatedContentLoader, TVRelatedContentViewController, TVRestrictionsPasscodeEntryViewController, TVSPlayer, TVSStateMachine, TVTransportBarView, TVVideoNowPlayingMetadataViewController, TVVideoNowPlayingViewController, UIActivityIndicatorView, UIAlertController, UIButton, UILabel, UITapGestureRecognizer, UIView;
@protocol TVVideoPlayerViewControllerDelegate;

@interface TVVideoPlayerViewController : UIViewController <TVMainVideoViewControllerDelegate, TVRelatedContentLoaderDelegate, TVRelatedContentViewControllerDelegate, TVVideoNowPlayingMetadataViewControllerDelegate, TVVideoNowPlayingViewControllerDelegate, TVSMediaCacheManagerResponder, UIViewControllerTransitioningDelegate>
{
    _Bool _showsTitleWhileLoading;
    _Bool _invalidatePlayerWhenDone;
    _Bool _dismissed;
    _Bool _loadingInitialItem;
    _Bool _startOrResumeButtonHasGottenInitialFocus;
    _Bool _shouldPlayAfterAppBecomesActive;
    _Bool _shouldOpenMetadataMenuAfterAppBecomesActive;
    _Bool _shouldPlayAfterLoadingCompletes;
    _Bool _modifyingCacheManager;
    _Bool _playerDurationAndBufferingObserversAdded;
    _Bool _deactivated;
    _Bool _playbackIsPasscodeRestricted;
    _Bool _playbackIsPasscodeRestrictedButPreviouslyUnlocked;
    _Bool _hasBeenShown;
    TVSPlayer *_player;
    id <TVVideoPlayerViewControllerDelegate> _delegate;
    long long _resumeMenuOption;
    double _startTime;
    TVSStateMachine *_stateMachine;
    UIButton *_resumePlayingButton;
    UIButton *_startFromBeginningButton;
    TVVideoNowPlayingViewController *_nowPlayingViewController;
    UIAlertController *_errorAlertController;
    TVRestrictionsPasscodeEntryViewController *_restrictionsPasscodeViewController;
    TVRelatedContentViewController *_relatedContentViewController;
    TVMainVideoViewController *_mainVideoViewController;
    TVRelatedContentLoader *_relatedContentLoader;
    UILabel *_titleTextLabel;
    UIActivityIndicatorView *_spinnerView;
    UIView *_titleAndSpinnerContainerView;
    TVVideoNowPlayingMetadataViewController *_metadataViewController;
    NSDictionary *_playerErrorDictionary;
    TVTransportBarView *_transportBarView;
    UIView *_overlayContainerView;
    UILabel *_timeUntilReadyToPlayLabel;
    NSDate *_dateOfLastTimeUntilReadyToPlayUpdate;
    NSDate *_dateThatViewControllerStartedWaitingForCaching;
    UITapGestureRecognizer *_selectButtonRecognizer;
    TVInteractionGestureRecognizer *_playPauseButtonRecognizer;
    NSTimer *_spinnerDelayTimer;
    unsigned long long _deactivationReasons;
    NSDate *_passcodeRestrictedPlaybackBackgroundedDate;
}

@property(nonatomic) _Bool hasBeenShown; // @synthesize hasBeenShown=_hasBeenShown;
@property(copy, nonatomic) NSDate *passcodeRestrictedPlaybackBackgroundedDate; // @synthesize passcodeRestrictedPlaybackBackgroundedDate=_passcodeRestrictedPlaybackBackgroundedDate;
@property(nonatomic) _Bool playbackIsPasscodeRestrictedButPreviouslyUnlocked; // @synthesize playbackIsPasscodeRestrictedButPreviouslyUnlocked=_playbackIsPasscodeRestrictedButPreviouslyUnlocked;
@property(nonatomic) _Bool playbackIsPasscodeRestricted; // @synthesize playbackIsPasscodeRestricted=_playbackIsPasscodeRestricted;
@property(nonatomic) unsigned long long deactivationReasons; // @synthesize deactivationReasons=_deactivationReasons;
@property(nonatomic) _Bool deactivated; // @synthesize deactivated=_deactivated;
@property(retain, nonatomic) NSTimer *spinnerDelayTimer; // @synthesize spinnerDelayTimer=_spinnerDelayTimer;
@property(nonatomic) _Bool playerDurationAndBufferingObserversAdded; // @synthesize playerDurationAndBufferingObserversAdded=_playerDurationAndBufferingObserversAdded;
@property(nonatomic) _Bool modifyingCacheManager; // @synthesize modifyingCacheManager=_modifyingCacheManager;
@property(nonatomic) _Bool shouldPlayAfterLoadingCompletes; // @synthesize shouldPlayAfterLoadingCompletes=_shouldPlayAfterLoadingCompletes;
@property(nonatomic) _Bool shouldOpenMetadataMenuAfterAppBecomesActive; // @synthesize shouldOpenMetadataMenuAfterAppBecomesActive=_shouldOpenMetadataMenuAfterAppBecomesActive;
@property(nonatomic) _Bool shouldPlayAfterAppBecomesActive; // @synthesize shouldPlayAfterAppBecomesActive=_shouldPlayAfterAppBecomesActive;
@property(retain, nonatomic) TVInteractionGestureRecognizer *playPauseButtonRecognizer; // @synthesize playPauseButtonRecognizer=_playPauseButtonRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *selectButtonRecognizer; // @synthesize selectButtonRecognizer=_selectButtonRecognizer;
@property(retain, nonatomic) NSDate *dateThatViewControllerStartedWaitingForCaching; // @synthesize dateThatViewControllerStartedWaitingForCaching=_dateThatViewControllerStartedWaitingForCaching;
@property(retain, nonatomic) NSDate *dateOfLastTimeUntilReadyToPlayUpdate; // @synthesize dateOfLastTimeUntilReadyToPlayUpdate=_dateOfLastTimeUntilReadyToPlayUpdate;
@property(retain, nonatomic) UILabel *timeUntilReadyToPlayLabel; // @synthesize timeUntilReadyToPlayLabel=_timeUntilReadyToPlayLabel;
@property(nonatomic) _Bool startOrResumeButtonHasGottenInitialFocus; // @synthesize startOrResumeButtonHasGottenInitialFocus=_startOrResumeButtonHasGottenInitialFocus;
@property(retain, nonatomic) UIView *overlayContainerView; // @synthesize overlayContainerView=_overlayContainerView;
@property(retain, nonatomic) TVTransportBarView *transportBarView; // @synthesize transportBarView=_transportBarView;
@property(nonatomic) _Bool loadingInitialItem; // @synthesize loadingInitialItem=_loadingInitialItem;
@property(nonatomic, getter=isDismissed) _Bool dismissed; // @synthesize dismissed=_dismissed;
@property(retain, nonatomic) NSDictionary *playerErrorDictionary; // @synthesize playerErrorDictionary=_playerErrorDictionary;
@property(retain, nonatomic) TVVideoNowPlayingMetadataViewController *metadataViewController; // @synthesize metadataViewController=_metadataViewController;
@property(retain, nonatomic) UIView *titleAndSpinnerContainerView; // @synthesize titleAndSpinnerContainerView=_titleAndSpinnerContainerView;
@property(retain, nonatomic) UIActivityIndicatorView *spinnerView; // @synthesize spinnerView=_spinnerView;
@property(retain, nonatomic) UILabel *titleTextLabel; // @synthesize titleTextLabel=_titleTextLabel;
@property(retain, nonatomic) TVRelatedContentLoader *relatedContentLoader; // @synthesize relatedContentLoader=_relatedContentLoader;
@property(retain, nonatomic) TVMainVideoViewController *mainVideoViewController; // @synthesize mainVideoViewController=_mainVideoViewController;
@property(retain, nonatomic) TVRelatedContentViewController *relatedContentViewController; // @synthesize relatedContentViewController=_relatedContentViewController;
@property(retain, nonatomic) TVRestrictionsPasscodeEntryViewController *restrictionsPasscodeViewController; // @synthesize restrictionsPasscodeViewController=_restrictionsPasscodeViewController;
@property(retain, nonatomic) UIAlertController *errorAlertController; // @synthesize errorAlertController=_errorAlertController;
@property(retain, nonatomic) TVVideoNowPlayingViewController *nowPlayingViewController; // @synthesize nowPlayingViewController=_nowPlayingViewController;
@property(nonatomic) _Bool invalidatePlayerWhenDone; // @synthesize invalidatePlayerWhenDone=_invalidatePlayerWhenDone;
@property(retain, nonatomic) UIButton *startFromBeginningButton; // @synthesize startFromBeginningButton=_startFromBeginningButton;
@property(retain, nonatomic) UIButton *resumePlayingButton; // @synthesize resumePlayingButton=_resumePlayingButton;
@property(retain, nonatomic) TVSStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(nonatomic) _Bool showsTitleWhileLoading; // @synthesize showsTitleWhileLoading=_showsTitleWhileLoading;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) long long resumeMenuOption; // @synthesize resumeMenuOption=_resumeMenuOption;
@property(nonatomic) __weak id <TVVideoPlayerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) TVSPlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)_registerStateMachineHandlers;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (_Bool)_restrictionsEnabled;
- (void)_spinnerDelayTimerFired:(id)arg1;
- (void)_removePlayerBufferingAndDurationObservers;
- (void)_modifyCacheManagerWithBlock:(CDUnknownBlockType)arg1;
- (void)_setPlayPauseButtonEnabled:(_Bool)arg1;
- (void)_handlePlayPauseButton;
- (void)_handleSelectButton:(id)arg1;
- (void)_updateTimeUntilReadyToPlay;
- (double)_currentMediaItemDuration;
- (id)_normalizedBufferedRangeFromCacheManager;
- (id)_normalizedBufferedRangeFromPlayer;
- (void)_startFromBeginningButtonSelected:(id)arg1;
- (void)_resumePlayingButtonSelected:(id)arg1;
- (void)_loadCurrentMediaItem;
- (void)_handleMenuButton:(id)arg1;
- (void)_cleanUpCachingListeners;
- (void)_configureCachingListeners;
- (void)_removeRestrictionsPasscodeViewController;
- (void)_addErrorViewControllerWithError:(id)arg1;
- (void)_removeRelatedContentViewController;
- (void)_removeNowPlayingViewController;
- (void)_addNowPlayingViewController;
- (void)_updateTitleText;
- (void)dismissWithErrorText:(id)arg1;
- (void)dismiss;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_applicationDidRemoveDeactivationReason:(id)arg1;
- (void)_applicationWillAddDeactivationReason:(id)arg1;
- (void)_handlePlaybackMediaItemPreparedNotification:(id)arg1;
- (void)_handlePlaybackStateChangeNotification:(id)arg1;
- (void)_handleMediaCacheManagerWillStopNotification:(id)arg1;
- (void)_handleMediaCacheManagerErrorNotification:(id)arg1;
- (void)_handlePlaybackErrorNotification:(id)arg1;
- (_Bool)mediaCacheManagerItemDidBecomeLikelyToKeepUp:(id)arg1;
- (void)presentMetadataMenu;
- (void)videoNowPlayingMetadataViewControllerDidCancel:(id)arg1;
- (void)relatedContentViewController:(id)arg1 didTransitionToDisplayMode:(unsigned long long)arg2;
- (void)relatedContentViewController:(id)arg1 willTransitionToDisplayMode:(unsigned long long)arg2;
- (void)didDismissRelatedContentViewController:(id)arg1;
- (void)didSelectMainVideoViewController:(id)arg1;
- (_Bool)relatedContentLoader:(id)arg1 shouldShowRelatedContent:(id)arg2;
- (void)loadRelatedContentForMediaItem:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)userInteractionBeganWithRelatedContentViewController:(id)arg1;
- (void)_dismissRelatedContent;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)willUpdateFocusToView:(id)arg1;
- (_Bool)shouldUpdateFocusFromView:(id)arg1 toView:(id)arg2 heading:(unsigned long long)arg3;
- (id)preferredFocusedView;
- (id)customAnimatorForNavigationControllerOperation:(long long)arg1 fromViewController:(id)arg2;
- (void)willMoveToParentViewController:(id)arg1;
- (void)restrictedPlaybackPreviouslyUnlocked;
- (void)loadCurrentMediaItem;
- (void)insertOverlaySubview:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1 invalidateWhenDone:(_Bool)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
