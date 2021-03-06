/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUARP.framework/CoreUARP
 */

@interface UARPHeySiriModelBase : NSObject {
    UARPAccessory * _accessory;
    UARPController * _controller;
    <UARPHeySiriModelDelegateProtocol> * _delegate;
    NSMutableArray * _downloadedModels;
    NSObject<OS_os_log> * _log;
    unsigned long long  _majorVersion;
    unsigned long long  _minorVersion;
    NSMutableArray * _preinstalledModels;
    NSObject<OS_dispatch_queue> * _queue;
    UARPSuperBinaryAsset * _superbinary;
    NSURL * _url;
}

@property (readonly) UARPAccessory *accessory;
@property <UARPHeySiriModelDelegateProtocol> *delegate;

- (void).cxx_destruct;
- (id)accessory;
- (void)checkCurrentHeySiriModel;
- (id)delegate;
- (id)init;
- (id)initWithAccessory:(id)arg1 controller:(id)arg2 url:(id)arg3;
- (unsigned long long)majorVersion;
- (unsigned long long)minorVersion;
- (bool)offerDynamicAssetToAccessory:(id)arg1 tag:(id)arg2 error:(id*)arg3;
- (bool)processDynamicAsset:(id*)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMajorVersion:(unsigned long long)arg1;
- (void)setMinorVersion:(unsigned long long)arg1;
- (void)setSuperbinary:(id)arg1;
- (id)superbinary;
- (id)url;

@end
