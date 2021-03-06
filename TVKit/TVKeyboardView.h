//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <TVKit/TVCollectionViewDelegate-Protocol.h>
#import <TVKit/TVKeyboardContextMenuViewDelegate-Protocol.h>
#import <TVKit/UICollectionViewDataSource-Protocol.h>
#import <TVKit/UICollectionViewDelegate-Protocol.h>
#import <TVKit/UICollectionViewDelegateFlowLayout-Protocol.h>
#import <TVKit/UIGestureRecognizerDelegate-Protocol.h>
#import <TVKit/UIKeyInput-Protocol.h>

@class NSArray, NSIndexPath, NSObject, NSString, TVKeyboardContextMenuView, UIColor, UIFont, UILongPressGestureRecognizer, _TVInertiaContainingCollectionView;
@protocol TVKeyboardDelegate;

@interface TVKeyboardView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate, UIKeyInput, TVCollectionViewDelegate, TVKeyboardContextMenuViewDelegate>
{
    _TVInertiaContainingCollectionView *_keysCollectionView;
    NSArray *_lowerCaseKeys;
    NSArray *_upperCaseKeys;
    NSArray *_symbolsKeys;
    NSArray *_recentKeys;
    NSIndexPath *_lastSelectedItem;
    int _activeKeyboard;
    UIFont *_keysFont;
    UIFont *_keysFontHighlighted;
    UIFont *_longTextKeysFont;
    UIFont *_longTextKeysFontHighlighted;
    UIFont *_actionKeysFont;
    UIColor *_keysColor;
    UIColor *_keysColorHighlighted;
    UIColor *_actionKeysColor;
    UIColor *_actionKeysColorHighlighted;
    UILongPressGestureRecognizer *_longSelectButtonRecognizer;
    TVKeyboardContextMenuView *_contextMenuView;
    NSObject<TVKeyboardDelegate> *_delegate;
    NSString *_recentCategory;
}

+ (id)compactKeyboardView;
+ (id)defaultKeyboardView;
@property(copy, nonatomic) NSString *recentCategory; // @synthesize recentCategory=_recentCategory;
@property(nonatomic) __weak NSObject<TVKeyboardDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)contextMenuDidFinish:(id)arg1;
- (void)contextMenuDidSelectBackspace:(id)arg1;
- (void)contextMenu:(id)arg1 didSelectText:(id)arg2;
- (id)_activeKeys;
- (long long)_numberOfKeyboards;
- (void)_onDeleteButton:(id)arg1;
- (void)_onUpperCaseButton:(id)arg1;
- (void)_hideContextMenu;
- (_Bool)_isCurrencyString:(id)arg1;
- (void)_showContextMenuForCell:(id)arg1;
- (void)_onMenuRecognizer:(id)arg1;
- (void)_onLongSelectButton:(id)arg1;
- (void)_onReturnKeyRecognizer:(id)arg1;
- (void)_clearRecent;
- (void)_didSelectKeyAtIndexPath:(id)arg1;
- (void)_keyboardAction:(unsigned long long)arg1;
- (void)_selectKeyboard:(int)arg1;
- (void)_reloadKeys;
- (void)_configureCell:(id)arg1 forKeyboardAtIndex:(unsigned long long)arg2;
- (void)_configureCell:(id)arg1 forActionAtIndex:(unsigned long long)arg2;
- (void)_configureCell:(id)arg1 forKeyAtIndex:(unsigned long long)arg2;
- (void)_onKeyboardHistoryChange:(id)arg1;
- (void)_updateCrossHighlights;
- (void)_updateTextHighlightForLayoutAttributes:(id)arg1 withHighlightProgress:(double)arg2;
- (id)_crossLayoutAttributesAtIndexPath:(id)arg1;
- (void)resetSelection;
- (void)setHighlightProgress:(double)arg1;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
- (_Bool)hasText;
- (void)collectionView:(id)arg1 didReceivePhysicalPlayForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)preferredFocusedItem;
- (void)layoutSubviews;
- (void)focusedViewDidChange;
- (_Bool)canBecomeFocused;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 lowerCaseKeys:(id)arg2 upperCaseKeys:(id)arg3 symbolKeys:(id)arg4;

// Remaining properties
@property(nonatomic) long long autocapitalizationType;
@property(nonatomic) long long autocorrectionType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long keyboardAppearance;
@property(nonatomic) long long keyboardType;
@property(nonatomic) long long returnKeyType;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
@property(nonatomic) long long spellCheckingType;
@property(readonly) Class superclass;

@end

