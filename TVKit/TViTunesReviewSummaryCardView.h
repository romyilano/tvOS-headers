//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVKit/TVReviewCardView.h>

@class NSAttributedString, UILabel, UIView;

@interface TViTunesReviewSummaryCardView : TVReviewCardView
{
    UIView *_starRatingView;
    UILabel *_ratingSummaryDescriptionLabel;
}

@property(retain, nonatomic) UILabel *ratingSummaryDescriptionLabel; // @synthesize ratingSummaryDescriptionLabel=_ratingSummaryDescriptionLabel;
@property(retain, nonatomic) UIView *starRatingView; // @synthesize starRatingView=_starRatingView;
- (void).cxx_destruct;
- (void)setDescriptionText:(id)arg1;
@property(copy, nonatomic) NSAttributedString *summaryDescriptionText;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
