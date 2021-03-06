//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <TVKit/TVPlaybackProgressAnimatorDelegate-Protocol.h>
#import <TVKit/UIGestureRecognizerDelegate-Protocol.h>
#import <TVKit/UIScrollViewDelegate-Protocol.h>

@class NSDate, NSObject, NSString, NSTimer, NSUUID, TVDateBasedPlaybackProgress, TVDefiniteDurationPlaybackProgress, TVInteractionGestureRecognizer, TVPermissiveSwipeGesture, TVPlaybackProgressAnimator, TVPlaybackRateMonitor, TVSChapter, TVSStateMachine, TVScrubImageCoordinator, TVScrubbingConfiguration, TVTransportBarView, UIScrollView, UISwipeGestureRecognizer, UITapGestureRecognizer, _TVB239FingerRestGestureRecognizer, _TVB239LongPressGestureRecognizer, _TVB239TapGestureRecognizer, _TVB39TapGestureRecognizer, _UIRepeatingPressGestureRecognizer;
@protocol TVSPlayback, TVVideoNowPlayingViewControllerDelegate;

@interface TVVideoNowPlayingViewController : UIViewController <TVPlaybackProgressAnimatorDelegate, UIGestureRecognizerDelegate, UIScrollViewDelegate>
{
    _Bool _suppressPreviewPane;
    _Bool _delaysInitialLoadingIndicator;
    _Bool _playbackObserversAdded;
    _Bool _userHasScrubbed;
    _Bool _scrubScrollViewDragging;
    _Bool _suppressHints;
    id <TVVideoNowPlayingViewControllerDelegate> _delegate;
    TVTransportBarView *_transportBarView;
    NSObject<TVSPlayback> *_playbackObject;
    TVDateBasedPlaybackProgress *_dateBasedPlaybackProgress;
    TVDefiniteDurationPlaybackProgress *_definiteDurationPlaybackProgress;
    TVPlaybackProgressAnimator *_playbackProgressAnimator;
    TVPlaybackRateMonitor *_playbackRateMonitor;
    id _elapsedTimeToken;
    double _lastKnownElapsedTime;
    NSDate *_lastKnownPlaybackDate;
    double _lastKnownEffectiveRate;
    NSUUID *_latestTransportBarAlphaUUID;
    NSDate *_lastObserverFireDate;
    NSTimer *_transportBarHideTimer;
    NSTimer *_transportBarShowTimer;
    NSTimer *_transportBarShowSpinnerTimer;
    TVSStateMachine *_stateMachine;
    double _temporaryElapsedTimeForChaptersIncludingInterstitials;
    NSDate *_temporaryPlaybackDateForChapters;
    TVSChapter *_jumpDestinationChapter;
    TVScrubImageCoordinator *_scrubImageCoordinator;
    UIScrollView *_scrubScrollView;
    double _scrubPercentage;
    TVScrubbingConfiguration *_scrubbingConfiguration;
    UITapGestureRecognizer *_menuRecognizer;
    _TVB239TapGestureRecognizer *_selectButtonTapRecognizer;
    _TVB239LongPressGestureRecognizer *_selectButtonLongClickRecognizer;
    _TVB239FingerRestGestureRecognizer *_fingerRestedRecognizer;
    TVPermissiveSwipeGesture *_swipeDownRecognizer;
    UISwipeGestureRecognizer *_swipeUpRecognizer;
    TVInteractionGestureRecognizer *_playPauseButtonTapRecognizer;
    long long _fingerRestLocation;
    long long _fingerRestStartLocation;
    _TVB39TapGestureRecognizer *_leftButtonClickRecognizer;
    _UIRepeatingPressGestureRecognizer *_b39LeftPressAndHoldRecognizer;
    _TVB39TapGestureRecognizer *_rightButtonClickRecognizer;
    _UIRepeatingPressGestureRecognizer *_b39RightPressAndHoldRecognizer;
    _TVB39TapGestureRecognizer *_upButtonClickRecognizer;
    _TVB39TapGestureRecognizer *_downButtonClickRecognizer;
    UITapGestureRecognizer *_b39SelectButtonClickRecognizer;
    UITapGestureRecognizer *_b239TapGestureRecognizer;
}

@property(nonatomic) _Bool suppressHints; // @synthesize suppressHints=_suppressHints;
@property(retain, nonatomic) UITapGestureRecognizer *b239TapGestureRecognizer; // @synthesize b239TapGestureRecognizer=_b239TapGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *b39SelectButtonClickRecognizer; // @synthesize b39SelectButtonClickRecognizer=_b39SelectButtonClickRecognizer;
@property(retain, nonatomic) _TVB39TapGestureRecognizer *downButtonClickRecognizer; // @synthesize downButtonClickRecognizer=_downButtonClickRecognizer;
@property(retain, nonatomic) _TVB39TapGestureRecognizer *upButtonClickRecognizer; // @synthesize upButtonClickRecognizer=_upButtonClickRecognizer;
@property(retain, nonatomic) _UIRepeatingPressGestureRecognizer *b39RightPressAndHoldRecognizer; // @synthesize b39RightPressAndHoldRecognizer=_b39RightPressAndHoldRecognizer;
@property(retain, nonatomic) _TVB39TapGestureRecognizer *rightButtonClickRecognizer; // @synthesize rightButtonClickRecognizer=_rightButtonClickRecognizer;
@property(retain, nonatomic) _UIRepeatingPressGestureRecognizer *b39LeftPressAndHoldRecognizer; // @synthesize b39LeftPressAndHoldRecognizer=_b39LeftPressAndHoldRecognizer;
@property(retain, nonatomic) _TVB39TapGestureRecognizer *leftButtonClickRecognizer; // @synthesize leftButtonClickRecognizer=_leftButtonClickRecognizer;
@property(nonatomic) long long fingerRestStartLocation; // @synthesize fingerRestStartLocation=_fingerRestStartLocation;
@property(nonatomic) long long fingerRestLocation; // @synthesize fingerRestLocation=_fingerRestLocation;
@property(retain, nonatomic) TVInteractionGestureRecognizer *playPauseButtonTapRecognizer; // @synthesize playPauseButtonTapRecognizer=_playPauseButtonTapRecognizer;
@property(retain, nonatomic) UISwipeGestureRecognizer *swipeUpRecognizer; // @synthesize swipeUpRecognizer=_swipeUpRecognizer;
@property(retain, nonatomic) TVPermissiveSwipeGesture *swipeDownRecognizer; // @synthesize swipeDownRecognizer=_swipeDownRecognizer;
@property(retain, nonatomic) _TVB239FingerRestGestureRecognizer *fingerRestedRecognizer; // @synthesize fingerRestedRecognizer=_fingerRestedRecognizer;
@property(retain, nonatomic) _TVB239LongPressGestureRecognizer *selectButtonLongClickRecognizer; // @synthesize selectButtonLongClickRecognizer=_selectButtonLongClickRecognizer;
@property(retain, nonatomic) _TVB239TapGestureRecognizer *selectButtonTapRecognizer; // @synthesize selectButtonTapRecognizer=_selectButtonTapRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *menuRecognizer; // @synthesize menuRecognizer=_menuRecognizer;
@property(retain, nonatomic) TVScrubbingConfiguration *scrubbingConfiguration; // @synthesize scrubbingConfiguration=_scrubbingConfiguration;
@property(nonatomic) double scrubPercentage; // @synthesize scrubPercentage=_scrubPercentage;
@property(nonatomic, getter=isScrubScrollViewDragging) _Bool scrubScrollViewDragging; // @synthesize scrubScrollViewDragging=_scrubScrollViewDragging;
@property(retain, nonatomic) UIScrollView *scrubScrollView; // @synthesize scrubScrollView=_scrubScrollView;
@property(retain, nonatomic) TVScrubImageCoordinator *scrubImageCoordinator; // @synthesize scrubImageCoordinator=_scrubImageCoordinator;
@property(nonatomic) _Bool userHasScrubbed; // @synthesize userHasScrubbed=_userHasScrubbed;
@property(retain, nonatomic) TVSChapter *jumpDestinationChapter; // @synthesize jumpDestinationChapter=_jumpDestinationChapter;
@property(retain, nonatomic) NSDate *temporaryPlaybackDateForChapters; // @synthesize temporaryPlaybackDateForChapters=_temporaryPlaybackDateForChapters;
@property(nonatomic) double temporaryElapsedTimeForChaptersIncludingInterstitials; // @synthesize temporaryElapsedTimeForChaptersIncludingInterstitials=_temporaryElapsedTimeForChaptersIncludingInterstitials;
@property(retain, nonatomic) TVSStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) NSTimer *transportBarShowSpinnerTimer; // @synthesize transportBarShowSpinnerTimer=_transportBarShowSpinnerTimer;
@property(retain, nonatomic) NSTimer *transportBarShowTimer; // @synthesize transportBarShowTimer=_transportBarShowTimer;
@property(retain, nonatomic) NSTimer *transportBarHideTimer; // @synthesize transportBarHideTimer=_transportBarHideTimer;
@property(copy, nonatomic) NSDate *lastObserverFireDate; // @synthesize lastObserverFireDate=_lastObserverFireDate;
@property(copy, nonatomic) NSUUID *latestTransportBarAlphaUUID; // @synthesize latestTransportBarAlphaUUID=_latestTransportBarAlphaUUID;
@property(nonatomic) double lastKnownEffectiveRate; // @synthesize lastKnownEffectiveRate=_lastKnownEffectiveRate;
@property(copy, nonatomic) NSDate *lastKnownPlaybackDate; // @synthesize lastKnownPlaybackDate=_lastKnownPlaybackDate;
@property(nonatomic) double lastKnownElapsedTime; // @synthesize lastKnownElapsedTime=_lastKnownElapsedTime;
@property(retain, nonatomic) id elapsedTimeToken; // @synthesize elapsedTimeToken=_elapsedTimeToken;
@property(retain, nonatomic) TVPlaybackRateMonitor *playbackRateMonitor; // @synthesize playbackRateMonitor=_playbackRateMonitor;
@property(retain, nonatomic) TVPlaybackProgressAnimator *playbackProgressAnimator; // @synthesize playbackProgressAnimator=_playbackProgressAnimator;
@property(retain, nonatomic) TVDefiniteDurationPlaybackProgress *definiteDurationPlaybackProgress; // @synthesize definiteDurationPlaybackProgress=_definiteDurationPlaybackProgress;
@property(retain, nonatomic) TVDateBasedPlaybackProgress *dateBasedPlaybackProgress; // @synthesize dateBasedPlaybackProgress=_dateBasedPlaybackProgress;
@property(nonatomic) _Bool playbackObserversAdded; // @synthesize playbackObserversAdded=_playbackObserversAdded;
@property(retain, nonatomic) NSObject<TVSPlayback> *playbackObject; // @synthesize playbackObject=_playbackObject;
@property(retain, nonatomic) TVTransportBarView *transportBarView; // @synthesize transportBarView=_transportBarView;
@property(nonatomic) _Bool delaysInitialLoadingIndicator; // @synthesize delaysInitialLoadingIndicator=_delaysInitialLoadingIndicator;
@property(nonatomic) _Bool suppressPreviewPane; // @synthesize suppressPreviewPane=_suppressPreviewPane;
@property(nonatomic) __weak id <TVVideoNowPlayingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_registerStateMachineHandlers;
- (void)_simulateScrubbingToTime:(double)arg1;
- (void)_decreasePlaybackRate;
- (void)_increasePlaybackRate;
- (_Bool)_isLiveContent;
- (double)_timeAfterInsertingInterstitials:(double)arg1;
- (double)_timeAfterRemovingInterstitials:(double)arg1;
- (void)_saveJumpDestinationMarkerWithElapsedTime:(double)arg1;
- (void)_clearMarker;
- (void)_saveMarker;
- (id)_markerForCurrentPlaybackPosition;
- (id)_adMarkerLocations;
- (id)_filteredChapterCollections;
- (_Bool)_shouldShowChaptersGroupName;
- (id)_nextChapterInDirection:(long long)arg1 fromTimeIncludingInterstitials:(double)arg2 orDate:(id)arg3;
- (void)_skipToChapter:(id)arg1;
- (id)_chapterMarkerLocations;
- (void)_cancelDisplayTransportBarSpinner;
- (void)_handleTransportBarShowSpinnerTimer;
- (void)_scheduleDisplayTransportBarSpinner;
- (void)_scheduleInitialLoadingTimer;
- (void)_showInfoAccessoryHint;
- (void)_scheduleInfoAccessoryHint;
- (void)_cancelInfoAccessoryHint;
- (void)_handleShowTimer:(id)arg1;
- (void)_handleTransportBarHideTimer:(id)arg1;
- (void)_hideTransportBarAnimated:(_Bool)arg1;
- (void)_ensureTransportBarIsVisible;
- (void)_showTransportBarWithTimeOut:(double)arg1;
- (void)_currentMediaItemDidChange:(id)arg1;
- (void)_playbackStateDidChange:(id)arg1;
- (_Bool)_touchPointIsAtRight:(struct CGPoint)arg1;
- (_Bool)_touchPointIsAtLeft:(struct CGPoint)arg1;
- (_Bool)_touchPointIsAtBottom:(struct CGPoint)arg1;
- (_Bool)_touchPointIsAtTop:(struct CGPoint)arg1;
- (void)_b239TapRecognized:(id)arg1;
- (void)_handleDownButtonClicked:(id)arg1;
- (void)_handleUpButtonClicked:(id)arg1;
- (void)_handleRightButtonHeld:(id)arg1;
- (void)_handleRightButtonClicked:(id)arg1;
- (void)_handleLeftButtonHeld:(id)arg1;
- (void)_handleLeftButtonClicked:(id)arg1;
- (void)_menuButtonPressedDuringScrub:(id)arg1;
- (void)_swipeUpRecognized:(id)arg1;
- (void)_swipeDownRecognized:(id)arg1;
- (void)_fingerRestRecognized:(id)arg1;
- (void)_selectButtonLongClickRecognized:(id)arg1;
- (void)_touchPadClicked:(id)arg1;
- (void)_playPauseButtonClicked;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_updateScrubPercentageWithScrollView:(id)arg1;
- (void)_velocityChangeTimeout;
- (double)_scrubPercentageBySnappingToNeareastChapterForScrubPercentage:(double)arg1 withScrollView:(id)arg2 horizontalVelocity:(double)arg3;
- (double)_scrubPercentageByClampingScrubPercentage:(double)arg1 withSeekableDateRange:(id)arg2;
- (id)_chaptersForSnapping;
- (double)_scrubPercentageForContentOffset:(struct CGPoint)arg1 withScrollView:(id)arg2;
- (struct CGPoint)_contentOffsetForScrubPercentage:(double)arg1 withScrollView:(id)arg2;
- (double)_scrubPercentageForElapsedTime:(double)arg1;
- (double)_elapsedTimeForScrubPercentage:(double)arg1;
- (void)_updateOffsetWithElapsedTime:(double)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)playbackProgressAnimator:(id)arg1 updateTitlesForElapsedTime:(double)arg2 withPlaybackDuration:(double)arg3;
- (double)_durationForLiveContent;
- (double)_elapsedTimeForPlaybackDate:(id)arg1;
- (id)_playbackDateForElapsedTime:(double)arg1;
- (void)playbackProgressAnimator:(id)arg1 didFinishAnimatingToElapsedTime:(double)arg2;
- (void)playbackProgressAnimator:(id)arg1 didPresentElapsedTime:(double)arg2;
- (double)currentElapsedTimeForPlaybackProgressAnimator:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_removeObserversIfNeeded;
- (void)didMoveToParentViewController:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)loadView;
- (void)tvs_beginSeekingBackward:(id)arg1;
- (void)tvs_beginSeekingForward:(id)arg1;
- (void)tvs_decreasePlaybackRate:(id)arg1;
- (void)tvs_increasePlaybackRate:(id)arg1;
- (void)tvs_skipBackward:(id)arg1;
- (void)tvs_skipForward:(id)arg1;
- (void)tvs_togglePlayPause:(id)arg1;
- (void)tvs_play:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (_Bool)_isInScrubMode;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

