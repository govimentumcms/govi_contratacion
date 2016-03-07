<?php
/**
 * @file
 * govi_contratacion.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function govi_contratacion_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-menu-contratacion_ejecucin-de-contratos:transparencia/contratacion/ejecucion_contratos.
  $menu_links['menu-menu-contratacion_ejecucin-de-contratos:transparencia/contratacion/ejecucion_contratos'] = array(
    'menu_name' => 'menu-menu-contratacion',
    'link_path' => 'transparencia/contratacion/ejecucion_contratos',
    'router_path' => 'transparencia/contratacion',
    'link_title' => 'Ejecución de contratos',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-menu-contratacion_ejecucin-de-contratos:transparencia/contratacion/ejecucion_contratos',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-contratacion_informacin-contractual:transparencia/contratacion/informacion_contractual.
  $menu_links['menu-menu-contratacion_informacin-contractual:transparencia/contratacion/informacion_contractual'] = array(
    'menu_name' => 'menu-menu-contratacion',
    'link_path' => 'transparencia/contratacion/informacion_contractual',
    'router_path' => 'transparencia/contratacion/informacion_contractual',
    'link_title' => 'Información contractual',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-menu-contratacion_informacin-contractual:transparencia/contratacion/informacion_contractual',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-contratacion_manual-de-contratacin:transparencia/contratacion/manual_contratacion.
  $menu_links['menu-menu-contratacion_manual-de-contratacin:transparencia/contratacion/manual_contratacion'] = array(
    'menu_name' => 'menu-menu-contratacion',
    'link_path' => 'transparencia/contratacion/manual_contratacion',
    'router_path' => 'transparencia/contratacion',
    'link_title' => 'Manual de contratación',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-menu-contratacion_manual-de-contratacin:transparencia/contratacion/manual_contratacion',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-contratacion_plan-anual-de-adquisiciones:transparencia/contratacion/plan_anual_contrataciones.
  $menu_links['menu-menu-contratacion_plan-anual-de-adquisiciones:transparencia/contratacion/plan_anual_contrataciones'] = array(
    'menu_name' => 'menu-menu-contratacion',
    'link_path' => 'transparencia/contratacion/plan_anual_contrataciones',
    'router_path' => 'transparencia/contratacion/plan_anual_contrataciones',
    'link_title' => 'Plan anual de adquisiciones',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'data-inner-width' => '',
        'data-inner-height' => '',
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-menu-contratacion_plan-anual-de-adquisiciones:transparencia/contratacion/plan_anual_contrataciones',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Ejecución de contratos');
  t('Información contractual');
  t('Manual de contratación');
  t('Plan anual de adquisiciones');

  return $menu_links;
}
