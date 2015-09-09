//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GeoServices/NSCopying-Protocol.h>
#import <GeoServices/NSSecureCoding-Protocol.h>

@class GEORouteHypothesisRequest;

@interface GEORouteHypothesisKey : NSObject <NSCopying, NSSecureCoding>
{
    GEORouteHypothesisRequest *_request;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, retain, nonatomic) GEORouteHypothesisRequest *request; // @synthesize request=_request;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)_isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithRouteHypothesisRequest:(id)arg1;

@end
