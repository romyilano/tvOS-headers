//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <TVMLKit/IKAppKeyboardDelegate-Protocol.h>
#import <TVMLKit/UICollectionViewDataSource-Protocol.h>
#import <TVMLKit/UICollectionViewDelegate-Protocol.h>
#import <TVMLKit/UICollectionViewDelegateFlowLayout-Protocol.h>
#import <TVMLKit/UITextFieldDelegate-Protocol.h>
#import <TVMLKit/_TVSearchTemplateViewDelegate-Protocol.h>

@class IKTextFieldElement, IKViewElement, NSArray, NSIndexPath, NSString, UISearchField, UISystemInputViewController, _TVSearchTemplateView;

__attribute__((visibility("hidden")))
@interface _TVSearchTemplateController : UIViewController <_TVSearchTemplateViewDelegate, IKAppKeyboardDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UITextFieldDelegate>
{
    IKViewElement *_templateElement;
    IKTextFieldElement *_searchFieldElement;
    IKViewElement *_scopeElement;
    IKViewElement *_suggestionsElement;
    IKViewElement *_collectionListElement;
    _TVSearchTemplateView *_searchTemplateView;
    UISearchField *_searchField;
    UISystemInputViewController *_systemInputViewController;
    UIViewController *_scopeViewController;
    UIViewController *_suggestionsViewController;
    NSArray *_viewControllers;
    NSArray *_rowSpacingMetricsList;
    NSIndexPath *_focusedViewControllerIndexPath;
}

+ (struct TVRowMetrics)_collapsedRowMetricsForViewController:(id)arg1;
+ (id)_viewControllerFromElement:(id)arg1 existingController:(id)arg2;
- (void).cxx_destruct;
- (_Bool)_shouldShowSuggestions;
- (_Bool)_shouldShowScope;
- (void)_setFocusedIndexPath:(id)arg1;
- (void)_updateKeyboardText;
- (void)_updateSearchFieldText;
- (struct CGRect)_visibleRectInRect:(struct CGRect)arg1;
- (struct UIEdgeInsets)_adjustedCollectionMargins;
- (void)_adjustOriginForSuggestionsView:(id)arg1 inCell:(id)arg2;
- (void)_adjustFrameForScopeView:(id)arg1 inCell:(id)arg2;
- (void)_updateViewIgnoringSparseUpdates:(_Bool)arg1;
- (void)_buildSpacingMetrics;
- (void)_updateCollectionList;
- (long long)_viewControllerIndexForSection:(long long)arg1;
- (long long)_sectionForViewControllerIndex:(long long)arg1;
- (void)_searchFieldEndEditing;
- (void)_searchFieldEditingChanged;
- (void)_searchFieldBeginEditing;
- (_Bool)textFieldShouldClear:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)textDidChangeForKeyboard:(id)arg1;
- (_Bool)_disableAutomaticKeyboardUI;
- (void)searchTemplateView:(id)arg1 didOffsetOriginForCollectionView:(id)arg2;
- (void)searchTemplateView:(id)arg1 didRemoveKeyboard:(id)arg2;
- (void)searchTemplateView:(id)arg1 willRemoveKeyboard:(id)arg2;
- (void)searchTemplateView:(id)arg1 didAddKeyboard:(id)arg2;
- (void)searchTemplateView:(id)arg1 willAddKeyboard:(id)arg2;
- (id)searchTemplateView:(id)arg1 preferredFocusedViewForKeyboard:(id)arg2;
- (void)siri_endInteractiveTransition;
- (void)siri_beginInteractiveTransition;
- (void)tv_updateViewLayout;
- (void)loadView;
- (void)updateWithViewElement:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
