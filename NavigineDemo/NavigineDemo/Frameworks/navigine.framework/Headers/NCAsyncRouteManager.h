// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from route_manager.djinni

#import "NCExport.h"
#import "NCLocationPoint.h"
#import <Foundation/Foundation.h>
@class NCRouteSession;


NAVIGINE_EXPORT
@interface NCAsyncRouteManager : NSObject

- (nullable NCRouteSession *)createRouteSession:(nonnull NSArray<NCLocationPoint *> *)wayPoints;

- (void)cancelRouteSession:(nullable NCRouteSession *)session;

@end
