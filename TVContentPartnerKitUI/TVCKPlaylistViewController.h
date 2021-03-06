//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVKit/TVPlaybackViewController.h>

@class IKPlaylistElement;

@interface TVCKPlaylistViewController : TVPlaybackViewController
{
    IKPlaylistElement *_playlistElement;
    _Bool _wasPlayingBackgroundAudio;
}

- (void).cxx_destruct;
- (void)_populateMediaItem:(id)arg1 withMetadatafromVideoElement:(id)arg2;
- (void)_playMediaItemForVideoElement:(id)arg1 actionParams:(id)arg2 isHLS:(_Bool)arg3 rentalAdamID:(id)arg4;
- (void)updateWithViewElement:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;

@end

