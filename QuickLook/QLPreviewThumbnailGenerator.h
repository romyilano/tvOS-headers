//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSString, UIImage;
@protocol OS_dispatch_queue, QLPreviewItem;

@interface QLPreviewThumbnailGenerator : NSObject
{
    id <QLPreviewItem> _item;
    struct CGSize _size;
    double _scale;
    UIImage *_thumbnailImage;
    NSString *_contentType;
    int _status;
    NSObject<OS_dispatch_queue> *_generationQueue;
    _Bool _addDecorations;
    _Bool _wantsJPEGRepresentationInstead;
    NSData *_jpegRepresentation;
}

+ (id)generatorForPreviewItem:(id)arg1 size:(struct CGSize)arg2;
+ (id)generatorForPreviewItem:(id)arg1 maxSize:(struct CGSize)arg2 scale:(double)arg3 decorations:(_Bool)arg4;
+ (_Bool)canGenerateThumbnailForPreviewItem:(id)arg1;
@property(readonly) NSData *jpegRepresentation; // @synthesize jpegRepresentation=_jpegRepresentation;
@property _Bool wantsJPEGRepresentationInstead; // @synthesize wantsJPEGRepresentationInstead=_wantsJPEGRepresentationInstead;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *generationQueue; // @synthesize generationQueue=_generationQueue;
@property(readonly) UIImage *thumbnailImage; // @synthesize thumbnailImage=_thumbnailImage;
- (void)cancel;
- (id)_thumbnailForMovie;
- (id)_thumbnailForPDF;
- (id)_thumbnailForImageAtURL:(id)arg1 contentTypeIdentifier:(id)arg2;
- (id)_thumbnailForImage;
- (id)_thumbnailForIris;
- (id)_endContextWithContentFrame:(struct CGRect)arg1;
- (struct CGContext *)_beginContextWithSize:(struct CGSize)arg1;
- (struct CGContext *)_beginContext;
- (struct CGSize)_pixelSize;
- (void)generateWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_generateSynchronouslyAndInvokeCompletionBlockOnMainQueue:(CDUnknownBlockType)arg1;
- (void)dealloc;

@end
