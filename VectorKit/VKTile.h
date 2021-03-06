//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class VKTilePool;

__attribute__((visibility("hidden")))
@interface VKTile : NSObject
{
    struct VKTileKey _key;
    CDStruct_aa5aacbc _matrix;
    CDStruct_aa5aacbc _inverseMatrix;
    VKTilePool *_pool;
    double _birthdate;
    struct VKCameraState _cameraState;
    CDStruct_aca18c62 bounds;
    Matrix_08d701e4 _gmMatrix;
    Matrix_08d701e4 _gmInverseMatrix;
    Matrix_99e705ad _gmShaderMatrix;
    shared_ptr_696716c4 _viewConstantData;
}

@property(readonly, nonatomic) double birthdate; // @synthesize birthdate=_birthdate;
@property(readonly, nonatomic) struct VKTileKey key; // @synthesize key=_key;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)updateViewDependentStateWithContext:(id)arg1;
- (void)updateViewDependentStateIfNecessaryWithContext:(id)arg1;
- (unsigned long long)geometryCount;
@property(readonly, nonatomic) double tileWidth;
@property(readonly, nonatomic) const CDStruct_aa5aacbc *inverseMatrix;
@property(readonly, nonatomic) const CDStruct_aa5aacbc *matrix;
- (void)dealloc;
- (id)initWithKey:(const struct VKTileKey *)arg1;
- (void)setPool:(id)arg1;
- (void)setKey:(const struct VKTileKey *)arg1;
- (id)description;
- (const struct VKTileKey *)keyPointer;
- (const Matrix_99e705ad *)gmShaderMatrix;
- (const Matrix_08d701e4 *)gmInverseMatrix;
- (const Matrix_08d701e4 *)gmMatrix;
@property(readonly) shared_ptr_696716c4 viewConstantData;

@end

