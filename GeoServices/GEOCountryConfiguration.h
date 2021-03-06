//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GeoServices/GEOResourceManifestTileGroupObserver-Protocol.h>
#import <GeoServices/_GEOCountryConfigurationServerProxyDelegate-Protocol.h>

@class NSLock, NSMutableArray, NSMutableDictionary, NSString;
@protocol _GEOCountryConfigurationServerProxy;

@interface GEOCountryConfiguration : NSObject <GEOResourceManifestTileGroupObserver, _GEOCountryConfigurationServerProxyDelegate>
{
    NSString *_countryCode;
    NSLock *_countryCodeLock;
    NSMutableArray *_updateCompletionHandlers;
    NSLock *_supportedFeaturesLock;
    NSMutableDictionary *_supportedFeatures;
    double _urlAuthenticationTimeToLive;
    _Bool _hasURLAuthenticationTimeToLive;
    id <_GEOCountryConfigurationServerProxy> _serverProxy;
}

+ (id)sharedConfiguration;
+ (void)setUseLocalProxy:(_Bool)arg1;
+ (void)disableServerConnection;
- (void)serverProxy:(id)arg1 countryCodeDidChange:(id)arg2;
- (void)serverProxyProvidersDidChange:(id)arg1;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (id)_countryDefaultForKey:(id)arg1 inCountry:(id)arg2 sourcePtr:(long long *)arg3;
- (id)defaultForKey:(id)arg1 defaultValue:(id)arg2;
- (id)defaultForKey:(id)arg1 defaultValue:(id)arg2 sourcePtr:(long long *)arg3;
- (id)_defaultForKey:(id)arg1 inCountry:(id)arg2 defaultValue:(id)arg3 sourcePtr:(long long *)arg4;
@property(copy, nonatomic) NSString *countryCode;
@property(readonly, nonatomic) double urlAuthenticationTimeToLive;
@property(readonly, nonatomic) _Bool currentCountrySupportsCarIntegration;
@property(readonly, nonatomic) _Bool currentCountrySupportsRouteGenius;
@property(readonly, nonatomic) _Bool currentCountrySupportsTraffic;
@property(readonly, nonatomic) _Bool currentCountrySupportsDirections;
@property(readonly, nonatomic) _Bool currentCountrySupportsNavigation;
- (_Bool)currentCountrySupportsFeature:(long long)arg1;
- (_Bool)countryCode:(id)arg1 supportsFeature:(long long)arg2;
- (void)_resetSupportedFeatures;
- (void)_updateCountryConfiguration:(CDUnknownBlockType)arg1 callbackQueue:(id)arg2;
- (void)updateCountryConfiguration:(CDUnknownBlockType)arg1 callbackQueue:(id)arg2;
- (void)updateCountryConfiguration:(CDUnknownBlockType)arg1;
- (void)updateProvidersForCurrentCountry;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

