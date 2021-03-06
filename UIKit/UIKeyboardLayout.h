//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/_UIKBHandRestRecognizerDelegate-Protocol.h>
#import <UIKit/_UIScreenEdgePanRecognizerDelegate-Protocol.h>

@class NSMapTable, NSMutableArray, NSString, NSUUID, UIKBScreenTraits, UIKBTextEditingTraits, UIKeyboardTaskQueue, UITextInputTraits, _UIKBHandRestRecognizer, _UIScreenEdgePanRecognizer;

@interface UIKeyboardLayout : UIView <_UIScreenEdgePanRecognizerDelegate, _UIKBHandRestRecognizerDelegate>
{
    UITextInputTraits *_inputTraits;
    UIKBScreenTraits *_screenTraits;
    UIKBTextEditingTraits *_textEditingTraits;
    NSMutableArray *_uncommittedTouches;
    NSUUID *_activeTouchUUID;
    NSUUID *_shiftKeyTouchUUID;
    unsigned long long _cursorLocation;
    _Bool _disableInteraction;
    UIKeyboardTaskQueue *_taskQueue;
    _Bool hideKeysUnderIndicator;
    _Bool _hasPreferredHeight;
    _Bool _isExecutingDeferredTouchTasks;
    double _preferredHeight;
    _UIScreenEdgePanRecognizer *_screenEdgePanRecognizer;
    CDUnknownBlockType _deferredTouchDownTask;
    CDUnknownBlockType _deferredTouchMovedTask;
    _UIKBHandRestRecognizer *_handRestRecognizer;
    double lastTouchUpTime;
    double _timestampOfLastTouchesEnded;
    NSMutableArray *_deferredTouches;
    NSMapTable *_deferredTouchTasks;
}

+ (_Bool)_showSmallDisplayKeyplane;
+ (struct CGSize)keyboardSizeForInputMode:(id)arg1 screenTraits:(id)arg2 keyboardType:(long long)arg3;
+ (Class)_subclassForScreenTraits:(id)arg1;
@property(nonatomic) _Bool isExecutingDeferredTouchTasks; // @synthesize isExecutingDeferredTouchTasks=_isExecutingDeferredTouchTasks;
@property(retain, nonatomic) NSMapTable *deferredTouchTasks; // @synthesize deferredTouchTasks=_deferredTouchTasks;
@property(retain, nonatomic) NSMutableArray *deferredTouches; // @synthesize deferredTouches=_deferredTouches;
@property(readonly, nonatomic) _Bool hasPreferredHeight; // @synthesize hasPreferredHeight=_hasPreferredHeight;
@property(readonly, nonatomic) double timestampOfLastTouchesEnded; // @synthesize timestampOfLastTouchesEnded=_timestampOfLastTouchesEnded;
@property(nonatomic) double lastTouchUpTime; // @synthesize lastTouchUpTime;
@property(retain, nonatomic) _UIKBHandRestRecognizer *handRestRecognizer; // @synthesize handRestRecognizer=_handRestRecognizer;
@property(copy, nonatomic) CDUnknownBlockType deferredTouchMovedTask; // @synthesize deferredTouchMovedTask=_deferredTouchMovedTask;
@property(copy, nonatomic) CDUnknownBlockType deferredTouchDownTask; // @synthesize deferredTouchDownTask=_deferredTouchDownTask;
@property(retain, nonatomic) _UIScreenEdgePanRecognizer *screenEdgePanRecognizer; // @synthesize screenEdgePanRecognizer=_screenEdgePanRecognizer;
@property(nonatomic) _Bool hideKeysUnderIndicator; // @synthesize hideKeysUnderIndicator;
@property(nonatomic) double preferredHeight; // @synthesize preferredHeight=_preferredHeight;
@property(nonatomic) _Bool disableInteraction; // @synthesize disableInteraction=_disableInteraction;
@property(nonatomic) unsigned long long cursorLocation; // @synthesize cursorLocation=_cursorLocation;
@property(retain, nonatomic) NSUUID *shiftKeyTouchUUID; // @synthesize shiftKeyTouchUUID=_shiftKeyTouchUUID;
@property(retain, nonatomic) NSUUID *activeTouchUUID; // @synthesize activeTouchUUID=_activeTouchUUID;
- (id)simulateTouchForCharacter:(id)arg1 errorVector:(struct CGPoint)arg2 shouldTypeVariants:(_Bool)arg3 baseKeyForVariants:(_Bool)arg4;
- (id)simulateTouch:(struct CGPoint)arg1;
- (void)changeToKeyplane:(id)arg1;
- (id)keyplaneNamed:(id)arg1;
- (id)keyplaneForKey:(id)arg1;
- (id)baseKeyForString:(id)arg1;
- (void)setTwoFingerTapTimestamp:(double)arg1;
- (_Bool)shouldAllowSelectionGestures:(_Bool)arg1 atPoint:(struct CGPoint)arg2 toBegin:(_Bool)arg3;
- (_Bool)supportsEmoji;
- (_Bool)keyplaneContainsEmojiKey;
- (void)triggerSpaceKeyplaneSwitchIfNecessary;
- (id)currentKeyplane;
- (void)didEndIndirectSelectionGesture;
- (void)willBeginIndirectSelectionGesture;
- (void)setDisableTouchInput:(_Bool)arg1;
- (void)setPasscodeOutlineAlpha:(double)arg1;
- (_Bool)shouldFadeToLayout;
- (_Bool)shouldFadeFromLayout;
- (void)fadeWithInvocation:(id)arg1;
- (SEL)handlerForNotification:(id)arg1;
- (struct CGRect)frameForKeylayoutName:(id)arg1;
- (struct CGSize)dragGestureSize;
- (double)flickDistance;
- (double)hitBuffer;
- (_Bool)canHandleEvent:(id)arg1;
- (void)didFinishScreenGestureRecognition;
- (void)didRecognizeGestureOnEdge:(unsigned long long)arg1 withDistance:(double)arg2;
- (unsigned long long)targetEdgesForScreenGestureRecognition;
- (_Bool)shouldAddHandRestRecognizer;
- (void)screenEdgePanRecognizerStateDidChange:(id)arg1;
- (void)_notifyLayoutOfGesturePosition:(struct CGPoint)arg1 relativeToEdge:(unsigned long long)arg2;
- (_Bool)_canAddTouchesToScreenGestureRecognizer:(id)arg1;
- (void)reloadKeyboardGestureRecognition;
- (_Bool)_shouldAllowKeyboardHandlingForTouchesEndedOrCancelled:(id)arg1 withEvent:(id)arg2;
- (_Bool)_shouldAllowKeyboardHandlingForTouchesMoved:(id)arg1 withEvent:(id)arg2;
- (_Bool)_shouldAllowKeyboardHandlingForTouchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)assertSavedLocation:(struct CGPoint)arg1 onTouch:(id)arg2 inWindow:(id)arg3 resetPrevious:(_Bool)arg4;
- (void)_addTouchToScreenEdgePanRecognizer:(id)arg1;
- (void)_executeDeferredTouchTasks;
- (_Bool)_shouldAllowKeyboardHandlingIfNecessaryForTouch:(id)arg1 withTouchState:(id)arg2 task:(CDUnknownBlockType)arg3;
- (void)recognizer:(id)arg1 didConsumeRestingTouches:(id)arg2;
- (void)recognizer:(id)arg1 didReleaseFailedTouches:(id)arg2;
- (void)_enumerateDeferredTouches:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (_Bool)canForceTouchCommit:(id)arg1;
- (void)commitTouches:(id)arg1 executionContext:(id)arg2;
- (void)forceUpdatesForCommittedTouch;
- (void)commitTouches:(id)arg1;
- (id)touchesToCommitBeforeTouchUUID:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)clearShiftIfNecessaryForEndedTouch:(id)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchCancelled:(id)arg1 executionContext:(id)arg2;
- (void)touchCancelled:(id)arg1;
- (void)touchUp:(id)arg1 executionContext:(id)arg2;
- (void)didCommitTouch:(id)arg1;
- (void)touchUp:(id)arg1;
- (void)touchDragged:(id)arg1 executionContext:(id)arg2;
- (void)touchDragged:(id)arg1;
- (void)touchDown:(id)arg1 executionContext:(id)arg2;
- (void)touchDown:(id)arg1;
- (_Bool)canProduceString:(id)arg1;
- (_Bool)shouldShowIndicator;
- (id)activationIndicatorView;
- (void)deactivateActiveKeysClearingTouchInfo:(_Bool)arg1 clearingDimming:(_Bool)arg2;
- (void)setReturnKeyEnabled:(_Bool)arg1 withDisplayName:(id)arg2 withType:(int)arg3;
- (void)restoreDefaultsForAllKeys;
- (void)restoreDefaultsForKey:(id)arg1;
- (void)setLongPressAction:(SEL)arg1 forKey:(id)arg2;
- (void)setAction:(SEL)arg1 forKey:(id)arg2;
- (void)setTarget:(id)arg1 forKey:(id)arg2;
- (void)setLabel:(id)arg1 forKey:(id)arg2;
@property(retain, nonatomic) NSString *layoutTag;
- (void)setRenderConfig:(id)arg1;
- (void)updateBackgroundCorners;
- (_Bool)canMultitap;
- (_Bool)hasAccentKey;
- (_Bool)hasCandidateKeys;
- (id)candidateList;
- (_Bool)performSpaceAction;
- (_Bool)performReturnAction;
- (void)didClearInput;
- (void)longPressAction;
- (_Bool)isShiftKeyPlaneChooser;
- (_Bool)isShiftKeyBeingHeld;
- (void)setAutoshift:(_Bool)arg1;
- (void)setShift:(_Bool)arg1;
- (_Bool)isAlphabeticPlane;
- (_Bool)ignoresShiftState;
- (_Bool)usesAutoShift;
- (void)updateLocalizedKeys:(_Bool)arg1;
- (void)deactivateActiveKeys;
- (void)clearTransientState;
- (void)clearUnusedObjects:(_Bool)arg1;
- (void)setRecentInputs:(id)arg1;
- (void)acceptRecentInputIfNecessary;
- (unsigned long long)textEditingKeyMask;
- (void)setTextEditingTraits:(id)arg1;
- (void)showKeyboardWithInputTraits:(id)arg1 screenTraits:(id)arg2 splitTraits:(id)arg3;
@property(readonly, nonatomic) long long idiom;
@property(readonly, nonatomic) long long orientation;
@property(retain, nonatomic) UIKeyboardTaskQueue *taskQueue;
- (void)willMoveToWindow:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)addWipeRecognizer;
- (void)wipeGestureRecognized:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

