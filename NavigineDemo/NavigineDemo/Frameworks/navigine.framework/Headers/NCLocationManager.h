// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from location_manager.djinni

#import "NCExport.h"
#import <Foundation/Foundation.h>
@protocol NCLocationListener;


NAVIGINE_EXPORT
@interface NCLocationManager : NSObject

- (void)addLocationListener:(nullable id<NCLocationListener>)listener;

- (void)removeLocationListener:(nullable id<NCLocationListener>)listener;

- (void)setLocationId:(int32_t)locationId;

- (int32_t)getLocationId;

@end
