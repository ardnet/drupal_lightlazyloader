<?php

/**
 * @file
 *
 */

/**
 * Callback for admin page of Lightlazyloader.
 */
function lightlazyloader_admin_settings() {
  $form = array();
  $form['lightlazyloader_enabled'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enabled'),
    '#default_value' => variable_get('lightlazyloader_enabled', TRUE),
    '#description' => t('Enable/Disable LightLazyloader'),
  );
  
  return system_settings_form($form);  
}


