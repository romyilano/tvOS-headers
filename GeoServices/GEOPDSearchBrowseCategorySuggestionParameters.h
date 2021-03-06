//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDViewportInfo;

@interface GEOPDSearchBrowseCategorySuggestionParameters : PBCodable <NSCopying>
{
    double _requestLocalTimestamp;
    int _minimumNumberOfCategories;
    GEOPDViewportInfo *_viewportInfo;
    struct {
        unsigned int requestLocalTimestamp:1;
        unsigned int minimumNumberOfCategories:1;
    } _has;
}

@property(nonatomic) double requestLocalTimestamp; // @synthesize requestLocalTimestamp=_requestLocalTimestamp;
@property(retain, nonatomic) GEOPDViewportInfo *viewportInfo; // @synthesize viewportInfo=_viewportInfo;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasMinimumNumberOfCategories;
@property(nonatomic) int minimumNumberOfCategories; // @synthesize minimumNumberOfCategories=_minimumNumberOfCategories;
@property(nonatomic) _Bool hasRequestLocalTimestamp;
@property(readonly, nonatomic) _Bool hasViewportInfo;
- (void)dealloc;

@end

