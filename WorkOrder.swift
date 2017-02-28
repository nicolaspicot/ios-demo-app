//
//  WorkOrder.swift
//  DemoApp
//
//  Created by Nicolas Picot on 28/02/2017.
//  Copyright © 2017 TCS. All rights reserved.
//

import Foundation

class WorkOrder {
    var id = ""
    var description = ""
    var status = ""
    var planningPlant = ""
    var type = ""
    var businessArea = ""
    var workCenterPlant = ""
    var mainWorkCenter = ""
    var priority = ""
    var functionalLocation = ""
    var activityType = ""
    var equipment = ""
    var note = ""
    var dueDate = ""
    init(id: String, description: String, status: String, planningPlant: String, type: String, businessArea: String, workCenterPlant: String, mainWorkCenter: String, priority: String, functionalLocation: String, activityType: String, equipment: String, note: String, dueDate: String) {
        self.id = id
        self.description = description
        self.status = status
        self.planningPlant = planningPlant
        self.type = type
        self.businessArea = businessArea
        self.workCenterPlant = workCenterPlant
        self.mainWorkCenter = mainWorkCenter
        self.priority = priority
        self.functionalLocation = functionalLocation
        self.activityType = activityType
        self.equipment = equipment
        self.note = note
        self.dueDate = dueDate 
    }
}
