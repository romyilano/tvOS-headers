//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDate;
@protocol PKDatePickerDelegate;

@interface PKDatePicker : UIView
{
    struct UIView *_internalPicker;
    _Bool _showsDay;
    _Bool _showsMonth;
    _Bool _showsYear;
    _Bool _usesDarkAppearance;
    NSDate *_date;
    id <PKDatePickerDelegate> _delegate;
}

@property(nonatomic) _Bool usesDarkAppearance; // @synthesize usesDarkAppearance=_usesDarkAppearance;
@property(nonatomic) id <PKDatePickerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) _Bool showsYear; // @synthesize showsYear=_showsYear;
@property(readonly, nonatomic) _Bool showsMonth; // @synthesize showsMonth=_showsMonth;
@property(readonly, nonatomic) _Bool showsDay; // @synthesize showsDay=_showsDay;
- (void)_forceReloadInternalPicker;
- (void)_dateValueChanged:(struct UIView *)arg1;
- (Class)_classForDay:(_Bool)arg1 month:(_Bool)arg2 year:(_Bool)arg3;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (void)reconfigureToShowDay:(_Bool)arg1 month:(_Bool)arg2 year:(_Bool)arg3;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)pk_applyAppearance:(struct _PKAppearanceSpecifier *)arg1;
- (id)pk_childrenForAppearance;

@end

