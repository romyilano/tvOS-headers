//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Parsec/PRSTitleSection-Protocol.h>

@class NSString, PRSImage;

@protocol PRSRichTitleSection <PRSTitleSection>
@property(retain, nonatomic) NSString *title_align;
@property(retain, nonatomic) PRSImage *image;
@property(retain, nonatomic) NSString *subtitle;

@optional
@property(nonatomic) _Bool thumbnail_crop_circle;
@property(retain, nonatomic) NSString *content_rating_text;
@end
