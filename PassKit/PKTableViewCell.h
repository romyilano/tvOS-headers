//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIColor;

@interface PKTableViewCell : UITableViewCell
{
    UIColor *_highlightColor;
    UIColor *_checkmarkAccessoryColor;
    UIColor *_customAccessoryColor;
}

@property(copy, nonatomic) UIColor *customAccessoryColor; // @synthesize customAccessoryColor=_customAccessoryColor;
@property(copy, nonatomic) UIColor *checkmarkAccessoryColor; // @synthesize checkmarkAccessoryColor=_checkmarkAccessoryColor;
@property(copy, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
- (id)_disclosureChevronImage:(_Bool)arg1;
- (id)_checkmarkImage:(_Bool)arg1;
- (void)pk_applyAppearance:(struct _PKAppearanceSpecifier *)arg1;

@end

