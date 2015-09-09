//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableMetadataDictionary, NSData, NSString;

@interface HDCodableObject : PBCodable <NSCopying>
{
    double _creationDate;
    HDCodableMetadataDictionary *_metadataDictionary;
    NSString *_sourceBundleIdentifier;
    NSData *_uuid;
    CDStruct_dc48a425 _has;
}

@property(nonatomic) double creationDate; // @synthesize creationDate=_creationDate;
@property(retain, nonatomic) NSString *sourceBundleIdentifier; // @synthesize sourceBundleIdentifier=_sourceBundleIdentifier;
@property(retain, nonatomic) HDCodableMetadataDictionary *metadataDictionary; // @synthesize metadataDictionary=_metadataDictionary;
@property(retain, nonatomic) NSData *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasCreationDate;
@property(readonly, nonatomic) _Bool hasSourceBundleIdentifier;
@property(readonly, nonatomic) _Bool hasMetadataDictionary;
@property(readonly, nonatomic) _Bool hasUuid;
- (id)decodedCreationDate;
- (id)decodedMetadata;
- (id)decodedUUID;

@end
