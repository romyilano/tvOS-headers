//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CMDrawableMapper, NSAffineTransform, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CMDrawingContext : NSObject
{
    CMDrawableMapper *_mapper;
    NSMutableArray *_actions;
    struct CGRect _frame;
    struct CGRect _finalFrame;
    struct __CFData *_data;
    struct CGDataConsumer *_dataConsumer;
    struct CGContext *_cgContext;
    NSAffineTransform *_currentTransform;
    NSMutableArray *_transforms;
    struct CGImage *_fillImage;
}

- (void)_restoreLastTransform;
- (void)_addTransform:(id)arg1;
- (void)_applyTransform:(id)arg1;
- (void)_playbackActions;
- (struct CGRect)transformRectToGroup:(struct CGRect)arg1;
- (struct CGRect)transformRectToPage:(struct CGRect)arg1;
- (struct CGRect)_transformRect:(struct CGRect)arg1 withTransform:(id)arg2;
- (void)addPath:(struct CGPath *)arg1;
- (void)addDebugPath:(struct CGPath *)arg1;
- (void)setLineDash:(id)arg1;
- (void)setLineWidth:(float)arg1;
- (void)setFillImage:(struct CGImage *)arg1;
- (void)setFillColor:(struct CGColor *)arg1;
- (void)setStrokeColor:(struct CGColor *)arg1;
- (void)restoreLastTransform;
- (void)addTransform:(id)arg1;
- (struct CGAffineTransform)currentTransform;
- (float)currentScaleFactor;
- (id)copyPDF;
- (struct CGRect)pdfFrame;
- (struct CGRect)frame;
- (id)mapper;
- (void)setMapper:(id)arg1;
- (struct CGContext *)_cgContext;
- (void)_closeContext;
- (void)_copyCGContext;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

