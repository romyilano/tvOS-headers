//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPTransportButton.h>

#import <MediaPlayerUI/MPUTransportButton-Protocol.h>

@class MPUTransportButtonEventHandler, NSString;

@interface MPUStandardTransportButton : MPTransportButton <MPUTransportButton>
{
    MPUTransportButtonEventHandler *_transportButtonEventHandler;
}

+ (id)transportButton;
- (void).cxx_destruct;
@property(nonatomic) long long transportButtonImageViewContentMode;
- (_Bool)wantsCustomHighlightAppearance;
- (void)prepareForReuse;
- (void)applyTransportButtonLayoutAttributes:(CDStruct_fa8656bd)arg1;
@property(readonly, nonatomic) MPUTransportButtonEventHandler *transportButtonEventHandler;
- (_Bool)shouldTrack;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)isEnabled;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) _Bool adjustsImageWhenHighlighted; // @dynamic adjustsImageWhenHighlighted;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
