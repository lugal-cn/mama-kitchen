<?php

/**
 * @file
 * kitchenes admin section.
 */

/**
 * Administration settings
 *
 * options: log each optimization
 *          multi-select list of tables to optimize
 *
 * @return array
 */
function kitchenes_admin_settings() {
  global $databases;

  drupal_add_css(drupal_get_path('module', 'kitchenes') .'/css/kitchenes.css');


  $form = array();
  $form['kitchenes_amap_key'] = array(
    '#type' => 'textfield',
    '#title' => 'AMap Develpoment Key',
    '#default_value' => variable_get('kitchenes_amap_key', ''),
    '#description' => t('Get the amap key from: http://lbs.amap.com/console/'),
  );

  $form['kitchenes_baidu_map_key'] = array(
    '#type' => 'textfield',
    '#title' => 'Baidu Develpoment Key',
    '#default_value' => variable_get('kitchenes_baidu_map_key', ''),
    '#description' => t('Get the amap key from: http://map.baidu.com'),
  );

  return system_settings_form($form);
}
