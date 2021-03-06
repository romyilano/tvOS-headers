//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSStoreMapping.h>

@class NSKnownKeysDictionary, NSManagedObjectModel, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface NSSQLModel : NSStoreMapping
{
    NSString *_configuration;
    NSManagedObjectModel *_mom;
    NSKnownKeysDictionary *_entitiesByName;
    NSMutableArray *_entities;
    id *_entityDescriptionToSQLMap;
    unsigned long long _brokenHashVersion;
    _Bool _retainLeopardStyleDictionaries;
    _Bool _modelHasPrecomputedKeyOrder;
    _Bool _hasVirtualToOnes;
}

- (void)_recordHasVirtualToOnes;
- (id)_precomputedKeyOrderForEntity:(id)arg1;
- (_Bool)_modelHasPrecomputedKeyOrder;
- (_Bool)_retainHashHack;
- (_Bool)_useSnowLeopardStyleHashing;
- (_Bool)_useLeopardStyleHashing;
- (void)_addIndexedEntity:(id)arg1;
- (id)entityForID:(unsigned long long)arg1;
- (id)entitiesByName;
- (id)entities;
- (unsigned long long)entityIDForName:(id)arg1;
- (id)_sqlEntityWithRenamingIdentifier:(id)arg1;
- (id)entityNamed:(id)arg1;
- (id)_entityMapping;
- (_Bool)_generateModel:(id)arg1 error:(id *)arg2;
- (id)managedObjectModel;
- (id)configurationName;
- (void)finalize;
- (void)dealloc;
- (id)initWithManagedObjectModel:(id)arg1 configurationName:(id)arg2 brokenHashVersion:(unsigned long long)arg3;
- (id)initWithManagedObjectModel:(id)arg1 configurationName:(id)arg2 retainHashHack:(_Bool)arg3;
- (id)initWithManagedObjectModel:(id)arg1 configurationName:(id)arg2;
- (id)initWithManagedObjectModel:(id)arg1 configurationName:(id)arg2 retainHashHack:(_Bool)arg3 brokenHashVersion:(unsigned long long)arg4;

@end

