//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ATVLegacyContentKit/TVLRootElement.h>

@class NSMutableArray;

@interface TVLAudioPlayerElement : TVLRootElement
{
    _Bool _indefinitePlaylist;
    NSMutableArray *_audioElements;
    long long _startPlaybackAtIndex;
}

@property(nonatomic) _Bool indefinitePlaylist; // @synthesize indefinitePlaylist=_indefinitePlaylist;
@property(nonatomic) long long startPlaybackAtIndex; // @synthesize startPlaybackAtIndex=_startPlaybackAtIndex;
@property(retain, nonatomic) NSMutableArray *audioElements; // @synthesize audioElements=_audioElements;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithXMLElement:(id)arg1 feedDocument:(id)arg2;

@end
