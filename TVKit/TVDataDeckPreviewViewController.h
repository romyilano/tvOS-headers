//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVKit/TVDataPreviewViewController.h>

@class TVDeckImageView, TVMusicArtworkInfoView, UIImage;
@protocol TVSDataBaseItem;

@interface TVDataDeckPreviewViewController : TVDataPreviewViewController
{
    id <TVSDataBaseItem> _artworkInfoItem;
    TVDeckImageView *_deckImageView;
    TVMusicArtworkInfoView *_artworkInfoView;
    UIImage *_placeholderImage;
}

+ (id)_imageProxiesForDataBaseItems:(id)arg1;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(retain, nonatomic) TVMusicArtworkInfoView *artworkInfoView; // @synthesize artworkInfoView=_artworkInfoView;
@property(retain, nonatomic) TVDeckImageView *deckImageView; // @synthesize deckImageView=_deckImageView;
@property(retain, nonatomic) id <TVSDataBaseItem> artworkInfoItem; // @synthesize artworkInfoItem=_artworkInfoItem;
- (void).cxx_destruct;
- (void)_setArtworkDescriptions;
- (_Bool)_setupArtworkInfoViewMetadata;
- (void)_configureArtworkInfoView;
- (void)loadView;
- (void)resumePreview;
- (void)pausePreview;
- (void)setDataBaseItems:(id)arg1;

@end

