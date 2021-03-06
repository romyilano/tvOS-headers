//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IBFoundation/IBBinaryArchiving-Protocol.h>
#import <IBFoundation/NSCopying-Protocol.h>

@class IBICDeviceThinningTraits, NSDictionary, NSMutableDictionary, NSMutableSet, NSSet, NSString;

@interface IBICCatalogCompilerOptions : NSObject <IBBinaryArchiving, NSCopying>
{
    NSMutableSet *_impliedIdiomIdentifiers;
    _Bool _compressPNGs;
    _Bool _enableOnDemandResources;
    _Bool _enableIncrementalDistill;
    _Bool _workaroundRadar17523681;
    _Bool _thinArtwork;
    _Bool _dumpAssets;
    _Bool _supportsResizableImages;
    _Bool _supportsTemplateRenderingIntent;
    _Bool _targetingV1CARFormat;
    long long _optimization;
    NSString *_issueTextForUnavailableOnDemandResourcesBuildSupport;
    NSString *_outputDirectory;
    NSString *_commonAssetRepositoryFileName;
    NSString *_brandAssetCollectionName;
    NSString *_appIconName;
    NSString *_launchImageName;
    NSString *_minimumDeploymentTarget;
    NSString *_targetPlatform;
    NSString *_targetName;
    NSSet *_targetDevices;
    NSDictionary *_assetPackOutputSpecifications;
    NSDictionary *_extendedParameters;
    NSString *_issueTextForResizableImage;
    NSString *_issueTextForTemplateRenderingIntent;
    IBICDeviceThinningTraits *_filterForDeviceTraits;
    NSMutableDictionary *_masksByName;
    NSMutableDictionary *_successIssuesByName;
    NSMutableDictionary *_failureIssuesByName;
}

@property(retain, nonatomic) NSMutableDictionary *failureIssuesByName; // @synthesize failureIssuesByName=_failureIssuesByName;
@property(retain, nonatomic) NSMutableDictionary *successIssuesByName; // @synthesize successIssuesByName=_successIssuesByName;
@property(retain, nonatomic) NSMutableDictionary *masksByName; // @synthesize masksByName=_masksByName;
@property(copy) IBICDeviceThinningTraits *filterForDeviceTraits; // @synthesize filterForDeviceTraits=_filterForDeviceTraits;
@property _Bool targetingV1CARFormat; // @synthesize targetingV1CARFormat=_targetingV1CARFormat;
@property(copy) NSString *issueTextForTemplateRenderingIntent; // @synthesize issueTextForTemplateRenderingIntent=_issueTextForTemplateRenderingIntent;
@property _Bool supportsTemplateRenderingIntent; // @synthesize supportsTemplateRenderingIntent=_supportsTemplateRenderingIntent;
@property(copy) NSString *issueTextForResizableImage; // @synthesize issueTextForResizableImage=_issueTextForResizableImage;
@property _Bool supportsResizableImages; // @synthesize supportsResizableImages=_supportsResizableImages;
@property(nonatomic) _Bool dumpAssets; // @synthesize dumpAssets=_dumpAssets;
@property(retain, nonatomic) NSDictionary *extendedParameters; // @synthesize extendedParameters=_extendedParameters;
@property(copy) NSDictionary *assetPackOutputSpecifications; // @synthesize assetPackOutputSpecifications=_assetPackOutputSpecifications;
@property _Bool thinArtwork; // @synthesize thinArtwork=_thinArtwork;
@property(readonly) NSSet *impliedIdiomIdentifiers; // @synthesize impliedIdiomIdentifiers=_impliedIdiomIdentifiers;
@property(copy) NSSet *targetDevices; // @synthesize targetDevices=_targetDevices;
@property(copy, nonatomic) NSString *targetName; // @synthesize targetName=_targetName;
@property(copy) NSString *targetPlatform; // @synthesize targetPlatform=_targetPlatform;
@property(copy) NSString *minimumDeploymentTarget; // @synthesize minimumDeploymentTarget=_minimumDeploymentTarget;
@property(copy) NSString *launchImageName; // @synthesize launchImageName=_launchImageName;
@property(copy) NSString *appIconName; // @synthesize appIconName=_appIconName;
@property(copy) NSString *brandAssetCollectionName; // @synthesize brandAssetCollectionName=_brandAssetCollectionName;
@property(copy) NSString *commonAssetRepositoryFileName; // @synthesize commonAssetRepositoryFileName=_commonAssetRepositoryFileName;
@property(copy) NSString *outputDirectory; // @synthesize outputDirectory=_outputDirectory;
@property _Bool workaroundRadar17523681; // @synthesize workaroundRadar17523681=_workaroundRadar17523681;
@property(copy) NSString *issueTextForUnavailableOnDemandResourcesBuildSupport; // @synthesize issueTextForUnavailableOnDemandResourcesBuildSupport=_issueTextForUnavailableOnDemandResourcesBuildSupport;
@property(nonatomic) long long optimization; // @synthesize optimization=_optimization;
@property(nonatomic) _Bool enableIncrementalDistill; // @synthesize enableIncrementalDistill=_enableIncrementalDistill;
@property _Bool enableOnDemandResources; // @synthesize enableOnDemandResources=_enableOnDemandResources;
@property _Bool compressPNGs; // @synthesize compressPNGs=_compressPNGs;
- (void).cxx_destruct;
- (id)uuidForCoreThemeDocument;
- (_Bool)shouldThinSlot:(id)arg1;
- (_Bool)shouldThinCatalogItem:(id)arg1;
- (id)successIssueTextForName:(id)arg1;
- (void)setSuccessIssueText:(id)arg1 forName:(id)arg2;
- (id)failureIssueTextForName:(id)arg1;
- (void)setFailureIssueText:(id)arg1 forName:(id)arg2;
- (id)maskForName:(id)arg1;
- (void)setMask:(id)arg1 forName:(id)arg2;
@property(readonly) NSSet *targetIdioms;
- (void)addImpliedIdiom:(id)arg1;
- (_Bool)isDeployingToAtLeast:(id)arg1;
- (_Bool)isTargetingDeploymentTargetsPriorTo:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToCatalogCompilerOptions:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

