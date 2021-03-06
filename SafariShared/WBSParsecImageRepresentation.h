//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariShared/WBSParsecModel.h>

@class NSNumber, NSObject, NSString, UIImage;
@protocol OS_dispatch_group;

@interface WBSParsecImageRepresentation : WBSParsecModel
{
    NSString *_dataString;
    NSString *_identifier;
    NSString *_imageURLString;
    UIImage *_image;
    _Bool _template;
    NSObject<OS_dispatch_group> *_downloadGroup;
    NSNumber *_baselineOffset;
    NSNumber *_roundCornerRadius;
}

+ (id)schema;
@property(readonly, nonatomic) NSNumber *roundCornerRadius; // @synthesize roundCornerRadius=_roundCornerRadius;
@property(readonly, nonatomic) NSNumber *baselineOffset; // @synthesize baselineOffset=_baselineOffset;
- (void).cxx_destruct;
- (_Bool)test_isTemplate;
- (id)test_imageURLString;
- (id)test_identifier;
- (id)test_data;
- (void)_fetchImageData;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)imageWithCompletion:(CDUnknownBlockType)arg1 forScale:(double)arg2;
- (id)imageWithScaleFactor:(double)arg1;
- (id)imageWithSession:(id)arg1;
- (id)initWithJSONObject:(id)arg1;

@end

