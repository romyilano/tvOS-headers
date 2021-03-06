//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOInstructionSet;

@interface GEOTransitClusterInfo : PBCodable <NSCopying>
{
    CDStruct_9f2792e4 _routeDetailsPrimaryArtworkIndexs;
    CDStruct_9f2792e4 _steppingArtworkIndexs;
    GEOInstructionSet *_instructions;
    unsigned int _routeDetailsSecondaryArtworkIndex;
    struct {
        unsigned int routeDetailsSecondaryArtworkIndex:1;
    } _has;
}

@property(nonatomic) unsigned int routeDetailsSecondaryArtworkIndex; // @synthesize routeDetailsSecondaryArtworkIndex=_routeDetailsSecondaryArtworkIndex;
@property(retain, nonatomic) GEOInstructionSet *instructions; // @synthesize instructions=_instructions;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasRouteDetailsSecondaryArtworkIndex;
- (void)setSteppingArtworkIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)steppingArtworkIndexAtIndex:(unsigned long long)arg1;
- (void)addSteppingArtworkIndex:(unsigned int)arg1;
- (void)clearSteppingArtworkIndexs;
@property(readonly, nonatomic) unsigned int *steppingArtworkIndexs;
@property(readonly, nonatomic) unsigned long long steppingArtworkIndexsCount;
- (void)setRouteDetailsPrimaryArtworkIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)routeDetailsPrimaryArtworkIndexAtIndex:(unsigned long long)arg1;
- (void)addRouteDetailsPrimaryArtworkIndex:(unsigned int)arg1;
- (void)clearRouteDetailsPrimaryArtworkIndexs;
@property(readonly, nonatomic) unsigned int *routeDetailsPrimaryArtworkIndexs;
@property(readonly, nonatomic) unsigned long long routeDetailsPrimaryArtworkIndexsCount;
@property(readonly, nonatomic) _Bool hasInstructions;
- (void)dealloc;

@end

