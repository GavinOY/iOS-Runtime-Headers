/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFCameraItem : HFItem <HFHomeKitItemProtocol, HFItemBuilderItem, HFServiceLikeBuilderCreating, HFServiceLikeItem> {
    HMCameraProfile * _cameraProfile;
    <HFCharacteristicValueSource> * _valueSource;
}

@property (nonatomic, readonly) HMAccessory *accessory;
@property (nonatomic, readonly) HMCameraProfile *cameraProfile;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) <HFHomeKitObject> *homeKitObject;
@property (nonatomic, readonly) BOOL isLocallyReachable;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HFCharacteristicValueSource> *valueSource;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)accessories;
- (id)accessory;
- (id)allControlItems;
- (id)cameraProfile;
- (id)controlPanelItems;
- (id)copyWithValueSource:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (BOOL)hasRemoteMicrophoneControl;
- (BOOL)hasRemoteSpeakerControl;
- (id)homeKitObject;
- (id)incrementalStateControlItem;
- (id)init;
- (id)initWithValueSource:(id)arg1 cameraProfile:(id)arg2;
- (BOOL)isLocallyReachable;
- (id)primaryStateControlItem;
- (id)serviceLikeBuilderInHome:(id)arg1;
- (id)services;
- (void)setLocalMicrophoneEnabled:(BOOL)arg1;
- (void)setLocalSpeakerVolume:(float)arg1;
- (void)startCameraStream;
- (void)stopCameraStream;
- (void)takeCameraSnapshot;
- (id)valueSource;

@end
