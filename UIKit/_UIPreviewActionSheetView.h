//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKit/UIScrollViewDelegate-Protocol.h>

@class NSArray, NSString, UILongPressGestureRecognizer, UIPanGestureRecognizer, UIScrollView, _UIPreviewActionSheetItemView;
@protocol _UIPreviewActionSheetViewDelegate;

__attribute__((visibility("hidden")))
@interface _UIPreviewActionSheetView : UIView <UIGestureRecognizerDelegate, UIScrollViewDelegate>
{
    id <_UIPreviewActionSheetViewDelegate> _delegate;
    CDUnknownBlockType _completionHandler;
    NSArray *_actions;
    NSString *_title;
    _UIPreviewActionSheetItemView *_selectedActionView;
    UIScrollView *_scrollView;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    struct UIEdgeInsets _contentInsets;
}

@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak _UIPreviewActionSheetItemView *selectedActionView; // @synthesize selectedActionView=_selectedActionView;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) __weak id <_UIPreviewActionSheetViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_longPressDidFire:(id)arg1;
- (void)_panDidFire:(id)arg1;
- (void)_fireActionForSelectedView;
- (void)_changeSelectedActionViewWithView:(id)arg1;
- (void)_setupGestureRecognizers;
- (void)_setupViewHierarchy;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 items:(id)arg3 contentInsets:(struct UIEdgeInsets)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

