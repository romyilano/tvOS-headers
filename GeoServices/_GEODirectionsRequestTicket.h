//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GeoServices/GEODirectionServiceTicket-Protocol.h>

@class GEOComposedRoute, GEODirectionsRouteRequest, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _GEODirectionsRequestTicket : NSObject <GEODirectionServiceTicket>
{
    GEODirectionsRouteRequest *_request;
    _Bool _isReroute;
    GEOComposedRoute *_originalRoute;
    _Bool _active;
    _Bool _canceled;
    NSDictionary *_userInfo;
}

@property(readonly, nonatomic) _Bool canceled; // @synthesize canceled=_canceled;
@property(readonly, nonatomic) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) GEOComposedRoute *originalRoute; // @synthesize originalRoute=_originalRoute;
@property(nonatomic) _Bool isReroute; // @synthesize isReroute=_isReroute;
@property(readonly, nonatomic) GEODirectionsRouteRequest *request; // @synthesize request=_request;
- (void)cancel;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSDictionary *responseUserInfo;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

