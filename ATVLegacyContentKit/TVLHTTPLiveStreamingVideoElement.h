//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ATVLegacyContentKit/TVLVideoAssetElement.h>

@class NSArray, NSDate, TVLTrickPlayConfigElement;

@interface TVLHTTPLiveStreamingVideoElement : TVLVideoAssetElement
{
    _Bool _indefiniteDuration;
    _Bool _beginPlaybackAtStartDate;
    float _bookmarkNetTimeSec;
    TVLTrickPlayConfigElement *_trickPlayConfig;
    NSArray *_eventGroups;
    NSArray *_requiredEventGroups;
    NSDate *_startDate;
}

@property(nonatomic) _Bool beginPlaybackAtStartDate; // @synthesize beginPlaybackAtStartDate=_beginPlaybackAtStartDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(nonatomic) float bookmarkNetTimeSec; // @synthesize bookmarkNetTimeSec=_bookmarkNetTimeSec;
@property(retain, nonatomic) NSArray *requiredEventGroups; // @synthesize requiredEventGroups=_requiredEventGroups;
@property(retain, nonatomic) NSArray *eventGroups; // @synthesize eventGroups=_eventGroups;
@property(retain, nonatomic) TVLTrickPlayConfigElement *trickPlayConfig; // @synthesize trickPlayConfig=_trickPlayConfig;
@property(nonatomic) _Bool indefiniteDuration; // @synthesize indefiniteDuration=_indefiniteDuration;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2;

@end

