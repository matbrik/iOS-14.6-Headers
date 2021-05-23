/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMetroRegionAssetProvider : NSObject {
    unsigned int  _catalogLoadRetryMultiplier;
    NSCache * _fileURLCache;
    NSDate * _lastCatalogLoadTime;
}

+ (id)sharedProvider;

- (void).cxx_destruct;
- (id)_acceptListForCountryCode:(id)arg1 name:(id)arg2;
- (void)_catalogDownloadFinishedWithResult:(long long)arg1;
- (void)_updateCatalog;
- (void)_updateCatalogAfterDelay:(double)arg1;
- (id)homeCountryCodeAcceptListForCountryCode:(id)arg1;
- (id)homeMetroAcceptListForCountryCode:(id)arg1;
- (id)init;
- (id)urlForInstalledCountryCode:(id)arg1;

@end