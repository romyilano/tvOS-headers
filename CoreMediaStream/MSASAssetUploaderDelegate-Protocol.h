//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreMediaStream/NSObject-Protocol.h>

@class MSASAlbum, MSASAssetCollection, MSASAssetUploader, NSError;

@protocol MSASAssetUploaderDelegate <NSObject>
- (void)MSASAssetUploader:(MSASAssetUploader *)arg1 didFinishUploadingAssetCollection:(MSASAssetCollection *)arg2 intoAlbum:(MSASAlbum *)arg3 error:(NSError *)arg4;
@end
